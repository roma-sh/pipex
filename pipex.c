/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 05:36:24 by rshatra           #+#    #+#             */
/*   Updated: 2024/05/04 18:31:31 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_free(char **paths_spleted, char *cmd, char *path)
{
	int	i;

	i = 0;
	if (cmd != 0)
		free (cmd);
	if (path != 0)
		free (path);
	while (paths_spleted[i] != 0)
	{
		free (paths_spleted[i]);
		i++;
	}
}

void	first_cmd(char **argv, char **env, int pipe_fd[2])
{
	char	*path;
	char	**arg_cmd;

	initi_cmd1(argv[1], pipe_fd);
	arg_cmd = arg_cmd_maker(argv[2]);
	if (arg_cmd[0] == 0)
		exit (99);
	path = find_path(arg_cmd[0], env);
	if (execve(path, arg_cmd, env) == -1)
	{
		error_handle(1, arg_cmd, path);
		exit(EXIT_FAILURE);
	}
	error_handle(0, arg_cmd, path);
}

void	second_cmd(char **argv, char **env, int pipe_fd[2])
{
	char	*path;
	char	**arg_cmd;

	initi_cmd2(argv[4], pipe_fd);
	arg_cmd = arg_cmd_maker(argv[3]);
	if (arg_cmd[0] == 0)
		exit (99);
	path = find_path(arg_cmd[0], env);
	if (execve(path, arg_cmd, env) == -1)
	{
		error_handle(1, arg_cmd, path);
		exit(EXIT_FAILURE);
	}
	error_handle(0, arg_cmd, path);
}

int	main(int argc, char *argv[], char **env)
{
	int	pipe_fd[2];
	int	pid[2];

	if (argc != 5)
		return (1);
	if (pipe(pipe_fd) == -1)
		return (2);
	pid[0] = fork();
	if (pid[0] < 0)
		return (3);
	if (pid[0] == 0)
		first_cmd(argv, env, pipe_fd);
	pid[1] = fork();
	if (pid[1] < 0)
		return (4);
	if (pid[1] == 0)
		second_cmd(argv, env, pipe_fd);
	close(pipe_fd[0]);
	close(pipe_fd[1]);
	waitpid(pid[0], 0, 0);
	waitpid(pid[1], 0, 0);
	return (0);
}
