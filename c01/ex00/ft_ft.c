/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:41:35 by pineau            #+#    #+#             */
/*   Updated: 2022/08/11 14:43:38 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	nbr = 21;
	
	printf("nbr avant ft_ft : %d\n", nbr);
	ft_ft(&nbr);
	printf("nbr apres ft_ft : %d\n", nbr);
	return (0);
}
