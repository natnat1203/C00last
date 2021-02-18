/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmenezes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:14:31 by nmenezes          #+#    #+#             */
/*   Updated: 2021/02/15 16:16:02 by nmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        alphanum(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}



}
char	ft_str_is_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}






char    *ft_strcapitalize(char *str)
{
    int i;
    int c;

    i = 0;
    c = 1;
    while (str[i] != '\0')
    {
        if (alphanum(str[i]))
        {
            if (c && str[i] >= 'a' && str[i] <= 'z')
                str[i] -= ' ';
            else if (!c && str[i] >= 'A' && str[i] <= 'Z')
                str[i] += ' ';
            c = 0;
        }
        else
            c = 1;
        i++;
    }
    return (str);
}

	
















