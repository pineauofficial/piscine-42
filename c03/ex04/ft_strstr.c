/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 02:31:56 by pineau            #+#    #+#             */
/*   Updated: 2022/08/17 19:31:11 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		while (str[a + b] == to_find[b])
		{
			b++;
			if (to_find[b] == '\0')
			{
				return (&str[a]);
			}
		}
		b = 0;
		a++;
	}
	return (0);
}
/*int main()
{
    char str[]={"bonjour les amis"};
    char to_find[]={"op"};
    printf("%s", ft_strstr(str, to_find));
}*/
