/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastelb <acastelb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:16:03 by acastelb          #+#    #+#             */
/*   Updated: 2021/01/28 11:33:41 by acastelb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
#define BUFFER_SIZE 128
#include "libft.h"
int		get_next_line(const int fd, char **line);
int		ft_linelen(char	*str);
char	*ft_strndup(char *src, int size);
int		ft_check_error(int fd, char **str, char **line);
char	*ft_strcpy(char *dest, char *src);
#endif
