/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakazdao <yakazdao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:37:49 by yakazdao          #+#    #+#             */
/*   Updated: 2023/12/14 16:24:10 by yakazdao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE  10
# endif

char	*get_next_line(int fd);
int		ft_found_newline(char *str);
char	*ft_strdup(char *str);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
#endif
