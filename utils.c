/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 05:36:58 by rshatra           #+#    #+#             */
/*   Updated: 2024/05/04 17:53:58 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	initi_cmd1(char *file1, int pipe_fd[2])
{
	int	fd;

	close(pipe_fd[0]);
	fd = open(file1, O_RDONLY);
	if (fd <= 0)
	{
		perror("can't open the INPUT file");
		exit(EXIT_FAILURE);
	}
	if (dup2(fd, STDIN_FILENO) == -1)
	{
		perror("problem with dup2");
		exit(EXIT_FAILURE);
	}
	if (dup2(pipe_fd[1], STDOUT_FILENO) == -1)
	{
		perror("problem with dup2");
		exit(EXIT_FAILURE);
	}
	close(fd);
}

void	initi_cmd2(char *file2, int pipe_fd[2])
{
	int	fd;

	close(pipe_fd[1]);
	fd = open(file2, O_TRUNC | O_CREAT | O_RDWR, 0644);
	if (fd < 0)
	{
		perror("Can't open or create the OUTPUT file");
		exit(EXIT_FAILURE);
	}
	if (dup2(fd, STDOUT_FILENO) == -1)
	{
		perror("problem with dup2");
		exit(EXIT_FAILURE);
	}
	if (dup2(pipe_fd[0], STDIN_FILENO) == -1)
	{
		perror("problem with dup2");
		exit(EXIT_FAILURE);
	}
	close(fd);
}

char	*find_path(char *cmd, char **env)
{
	char	*paths;
	char	**paths_spleted;
	char	*path;
	int		i;

	i = 0;
	while (ft_strnstr(*env, "PATH", 4) == NULL)
		env++;
	paths = (*env + 5);
	paths_spleted = ft_split(paths, ':');
	cmd = ft_strjoin("/", cmd);
	while (paths_spleted[i])
	{
		path = ft_strjoin(paths_spleted[i], cmd);
		if (access(path, F_OK | X_OK | R_OK) == 0)
		{
			ft_free(paths_spleted, cmd, NULL);
			return (path);
		}
		i++;
	}
	ft_free(paths_spleted, cmd, path);
	return (NULL);
}

char	**arg_cmd_maker(char *cmd)
{
	char	**s;

	s = ft_split(cmd, ' ');
	return (s);
}

void	error_handle(int error, char **arg_cmd, char *path)
{
	int	i;

	i = 0;
	while (arg_cmd[i] != 0)
	{
		free(arg_cmd[i]);
		i++;
	}
	if (path != 0)
		free(path);
	if (error != 0)
		perror("Error happend");
}
