/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:08:49 by pineau            #+#    #+#             */
/*   Updated: 2022/09/02 07:22:11 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	b;
	int	c;

	if (min >= max)
	{
		a = NULL;
		return (a);
	}
	a = malloc(sizeof(int) * (max - min));
	b = min;
	c = 0;
	while (b < max)
	{
		a[c] = b;
		b++;
		c++;
	}
	return (a);
}
/*int main()
{
	int min = 0;
        int max = 9;
	int i = 0;

	while(i < 9)
	{
		printf("[%d]", ft_range(min, max)[i]);
		i++;
	}
}*/
