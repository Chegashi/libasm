/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mochegri <mochegri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/16 13:24:09 by mochegri          #+#    #+#             */
/*   Updated: 2021/05/16 18:10:28 by mochegri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
# define LIBASM_H

int		ft_strlen(char *s);
char	*ft_strcpy(char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_write(int stdout, void *str, int len);
int		ft_read(int stdin, void *str, int len);
char	*ft_strdup(char *s1);
#endif