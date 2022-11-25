/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:46:04 by pineau            #+#    #+#             */
/*   Updated: 2022/08/11 14:48:14 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	nb;
	int	*nb1;
	int	**nb2;
	int	***nb3;
	int	****nb4;
	int	*****nb5;
	int	******nb6;
	int	*******nb7;
	int	********nb8;
	
	nb = 21;
	nb1 = &nb;
	nb2 = &nb1;
	nb3 = &nb2;
	nb4 = &nb3;
	nb5 = &nb4;
	nb6 = &nb5;
	nb7 = &nb6;
	nb8 = &nb7;
	printf("nb avant : %d\n", nb);
	printf("nb8 avant : %d\n", ********nb8);
	ft_ultimate_ft(&nb8);
	printf("nb8 apres : %d\n", ********nb8);
	printf("nb apres : %d\n", nb);	
	return (0);
}
