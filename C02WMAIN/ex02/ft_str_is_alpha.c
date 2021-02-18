/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 15:02:20 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/15 16:48:10 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_alpha(char *src)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0')
	{
		if (!((src[i] >= 'A' && src[i] <= 'Z') ||
			(src[i] >= 'a' && src[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
     
}

int    main()
{
    char tab[] = "dcdsvrfv";
	printf("%d\n", ft_str_is_alpha(tab));
    return 0;
}
