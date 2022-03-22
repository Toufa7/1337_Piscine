/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:10:11 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/12 10:52:20 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	a;

	(void)ac;
	a = 1;
	i = 0;
	while (av[a])
	{
		i = 0;
		while (av[a][i])
		{
			ft_putchar(av[a][i]);
			i++;
		}
		a++;
		write(1, "\n", 1);
	}
}
