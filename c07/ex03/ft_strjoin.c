/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 09:09:24 by pineau            #+#    #+#             */
/*   Updated: 2022/09/01 10:23:18 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}

char	*ft_error(int size, char *tab)
{
	if (size == 0)
	{
		tab = malloc(sizeof(char) * 1);
		tab = NULL;
		return (tab);
	}
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	char	*tab;

	a = -1;
	tab = 0;
	if (size == 0)
	{
		ft_error(size, tab);
		return (tab);
	}
	while (++a < size)
		b = b + ft_strlen(strs[a]);
	tab = malloc(sizeof(char) * b + 1 + (size - 1 * ft_strlen(sep)));
	if (!tab)
		return (NULL);
	a = 0;
	while (size != 0)
	{
		ft_strcat(tab, strs[a++]);
		if (size > 1)
			ft_strcat(tab, sep);
		size--;
	}
	return (tab);
}
/*int main ()
{
    char *tab[5]={ "first", "second", "blbla", "ibrbv", "cubeyvey" };
int a = 5;
char sep[]={"_"};
printf("%s", ft_strjoin(a, tab, sep));
}*/
