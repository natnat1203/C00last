/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 17:18:34 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/16 10:06:03 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97  && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

int	main()
{
	char tab[] = "salut";
	printf("%s\n", ft_strupcase(tab));
	return (0);
}
