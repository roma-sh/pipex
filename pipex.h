/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 05:36:39 by rshatra           #+#    #+#             */
/*   Updated: 2024/05/04 18:21:52 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./libft/libft.h"
# include <errno.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <unistd.h>

void				first_cmd(char **argv, char **env, int pipe_fd[2]);
void				second_cmd(char **argv, char **env, int pipe_fd[2]);
void				initi_cmd1(char *file1, int pipe_fd[2]);
void				initi_cmd2(char *file2, int pipe_fd[2]);
char				*find_path(char *cmd, char **env);
char				**arg_cmd_maker(char *cmd);
void				error_handle(int error, char **arg_cmd, char *path);
void				ft_free(char **paths_spleted,
						char *cmd, char *path);

#endif
