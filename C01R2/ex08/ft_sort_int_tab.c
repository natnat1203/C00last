/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 13:50:29 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/13 15:29:30 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	n;
	int x;

	n = 0;
	while (x < (size - 1))
	{
		if (tab[n] > tab[n + 1])
		{
			temp = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = temp;
		}
		x++;
	}
}