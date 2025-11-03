/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil--de <sgil--de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 13:27:01 by sgil--de          #+#    #+#             */
/*   Updated: 2025/11/03 17:32:08 by sgil--de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	if (result <= 0)
		return (0);
	while (result < nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
