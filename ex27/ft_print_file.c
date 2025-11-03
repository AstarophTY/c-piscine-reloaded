/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil--de <sgil--de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 18:24:37 by sgil--de          #+#    #+#             */
/*   Updated: 2025/11/03 18:31:52 by sgil--de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "display_file.h"

void	ft_clear_tab(char *str)
{
	while (*str)
		*str++ = 0;
}

int	ft_print_file(int fd)
{
	int		i;
	char	str[1024];

	i = 0;
	while (read(fd, &str[i], 1024))
	{
		write(1, str, 1024);
		ft_clear_tab(str);
		i += 1024;
	}
	return (1);
}