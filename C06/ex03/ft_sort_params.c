/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 18:02:05 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/12 20:59:36 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	*temp;

	a = 1;
	while (av[a])
	{
		b = a + 1;
		while (av[b])
		{
			if (ft_strcmp(av[a], av[b]) >= 0)
			{
				temp = av[a];
				av[a] = av[b];
				av[b] = temp;
			}
			b++;
		}
		a++;
	}
	a = 1;
	while (a < ac)
		ft_putstr(av[a++]), ft_putchar('\n');
}
