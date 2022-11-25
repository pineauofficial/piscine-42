/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:32:33 by pineau            #+#    #+#             */
/*   Updated: 2022/08/15 17:22:55 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < size)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (a);
}
/*int main()
{
    int size = 2;
    char dest[]={"hello"};
    char src[]={"world"};
    printf("%d", ft_strlcat(dest, src, size));
}*/
