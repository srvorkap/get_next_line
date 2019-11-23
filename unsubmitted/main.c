/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 23:22:55 by srvorkap          #+#    #+#             */
/*   Updated: 2019/11/22 21:35:24 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int		fd1;
	int		fd2;
	char	*line;

	if (ac < 2)
		printf("\n");
	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	while (get_next_line(fd1, &line) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	while (get_next_line(fd2, &line) == 1)
	{
		printf("%s\n", line);
		free(line);
	}
	return (0);
}
