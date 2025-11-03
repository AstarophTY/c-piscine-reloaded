/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgil--de <sgil--de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:38:09 by sgil--de          #+#    #+#             */
/*   Updated: 2025/11/03 15:07:06 by sgil--de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_putchar(str[i++]);
}

void	ft_print_tab(char **strs)
{
	int	i;

	i = 1;
	while (strs[i])
	{
		ft_putstr(strs[i]);
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	if (argc < 2)
		return (1);
	while (i < argc && argv[i])
	{
		j = i + 1;
		while (j < argc && argv[j])
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
	}
	ft_print_tab(argv);
	return (0);
}
