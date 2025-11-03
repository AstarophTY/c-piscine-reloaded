/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil--de <sgil--de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:54:38 by sgil--de          #+#    #+#             */
/*   Updated: 2025/11/03 18:18:17 by sgil--de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

int main(int argc, char const *argv[])
{
	int	fd;
	(void)argv;
	if (argc == 1)
		return (ft_putstr("File name is missing.\n"));
	else if (argc > 2)
		return (ft_putstr("Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (ft_putstr("Cannot read file.\n"));
	
	close(fd);
	return (0);
}
