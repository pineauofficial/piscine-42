/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:20:07 by pineau            #+#    #+#             */
/*   Updated: 2022/08/30 19:53:42 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	b;
	int	a;

	a = 0;
	b = min;
	if (min >= max)
	{	
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (!range)
		return (-1);
	while (b < max)
	{
		range[0][a] = b;
		b++;
		a++;
	}	
	return (a);
}
/*int    main(void)
{
	int    *range;
	int    i;

	
	i = ft_ultimate_range(&range, -10, 10);
	printf("%d\n", i);
	free(range);
	return (0);
}*/
