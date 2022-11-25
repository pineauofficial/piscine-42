/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:14:27 by pineau            #+#    #+#             */
/*   Updated: 2022/08/30 18:29:38 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		b;

	b = 0;
	a = malloc(sizeof(char) * ft_strlen(src) + 1);
	while (src[b] != '\0')
	{
		a[b] = src[b];
		b++;
	}
	a[b] = '\0';
	return (a);
}
/*int	main()
{
	char src[]={"bonjour les amis"};
	printf("%s", ft_strdup(src));
}*/
