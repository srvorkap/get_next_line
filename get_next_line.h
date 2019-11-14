/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 23:42:46 by srvorkap          #+#    #+#             */
/*   Updated: 2019/11/12 23:22:08 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# define FD_LIMIT 8192
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

int get_next_line(const int fd, char **line);

#endif
