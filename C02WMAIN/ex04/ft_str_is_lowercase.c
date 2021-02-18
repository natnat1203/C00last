/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:03:31 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/15 17:03:37 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

int main ()
{
	char tab[] = "gfd";
	printf("%d\n", ft_str_is_lowercase(tab));
	return 0;
}
