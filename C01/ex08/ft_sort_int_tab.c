/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otoufah <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:07:10 by otoufah           #+#    #+#             */
/*   Updated: 2021/10/14 11:17:11 by otoufah          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	b = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
	}
}
