/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_control.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarino <lemarino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 13:33:04 by lemarino          #+#    #+#             */
/*   Updated: 2025/02/28 18:15:54 by lemarino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	extension_check(char *filename)
{
	if (!(ft_strrcmp(filename, "x.fdf", 4)))
	{
		perror(RED"ERR: invalid map extension."NO_COLOR);
		exit(0);
		return (0);
	}
	return (1);
}

int	error_control(int ac, char **av)
{
	int	flag;

	flag = 0;
	if (ac != 2)
	{
		perror(RED"ERR: invalid number of arguments."NO_COLOR);
		exit(0);
		return (0);
	}
	flag += extension_check(av[1]);
	return (flag);
}
