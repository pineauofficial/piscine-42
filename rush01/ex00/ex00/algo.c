/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:07:45 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/21 17:32:24 by lsablon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	placement(int (*matrice)[4], int position, int *p);
int	tab_valide_h1(int (*matrice)[4], int *p, int index);
int	tab_valide_h2(int (*matrice)[4], int *p, int index);
int	tab_valide_v1(int (*matrice)[4], int *p, int index);
int	tab_valide_v2(int (*matrice)[4], int *p, int index);
int	is_absent(int k, int (*matrice)[4], int i, int j);
int	conditions_validees(int (*matrice)[4], int *p);

int	placement(int (*matrice)[4], int position, int *p)
{
	int	i;
	int	j;
	int	k;

	if (position == 16 && conditions_validees(matrice, p) == 1)
		return (1);
	if (position == 16)
		return (0);
	i = position / 4;
	j = position % 4;
	if (matrice[i][j] != 0)
		return (placement(matrice, position + 1, p));
	k = 0;
	while (++k < 5)
	{
		if ((is_absent(k, matrice, i, j) == 1))
		{
			matrice[i][j] = k;
			if (placement(matrice, position + 1, p) == 1)
				return (1);
		}
	}
	matrice[i][j] = 0;
	return (0);
}

int	conditions_validees(int (*matrice)[4], int *p)
{
	if (tab_valide_h1(matrice, p, 0) == 1 && tab_valide_h2(matrice, p, 4) == 1
		&& tab_valide_v1(matrice, p, 8) == 1
		&& tab_valide_v2(matrice, p, 12) == 1)
		return (1);
	return (0);
}	
