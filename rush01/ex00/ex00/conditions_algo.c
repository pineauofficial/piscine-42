/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions_algo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:29:48 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/21 18:24:26 by lsablon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_absent(int k, int (*matrice)[4], int i, int j)
{
	int	a;

	a = 0;
	while (a < 4)
	{
		if (matrice[i][a] == k)
			return (0);
		a++;
	}
	a = 0;
	while (a < 4)
	{
		if (matrice[a][j] == k)
			return (0);
		a++;
	}
	return (1);
}

int	tab_valide_h1(int (*matrice)[4], int *p, int index)
{
	int	j;
	int	i;
	int	compteur;
	int	a;

	j = 0;
	while (j < 4)
	{
		i = 0;
		compteur = 1;
		a = matrice[i][j];
		while (i < 3)
		{
			if (a < matrice[i + 1][j])
			{
				compteur++;
				a = matrice[i + 1][j];
			}
			i++;
		}
		if (compteur != (int)p[index++])
			return (0);
		j++;
	}
	return (1);
}

int	tab_valide_h2(int (*matrice)[4], int *p, int index)
{
	int	j;
	int	i;
	int	compteur;
	int	a;

	j = 0;
	while (j < 4)
	{
		i = 3;
		compteur = 1;
		a = matrice[i][j];
		while (i > 0)
		{
			if (a < matrice[i - 1][j])
			{
				compteur++;
				a = matrice[i - 1][j];
			}
			i--;
		}
		if (compteur != (int)p[index++])
			return (0);
		j++;
	}
	return (1);
}

int	tab_valide_v1(int (*matrice)[4], int *p, int index)
{
	int	j;
	int	i;
	int	compteur;
	int	a;

	i = 0;
	while (i < 4)
	{
		j = 0;
		compteur = 1;
		a = matrice [i][j];
		while (j < 3)
		{
			if (a < matrice[i][j + 1])
			{
				compteur++;
				a = matrice[i][j + 1];
			}
			j++;
		}
		if (compteur != (int)p[index++])
			return (0);
		i++;
	}
	return (1);
}

int	tab_valide_v2(int (*matrice)[4], int *p, int index)
{
	int	j;
	int	i;
	int	compteur;
	int	a;

	i = 0;
	while (i < 4)
	{
		j = 3;
		compteur = 1;
		a = matrice[i][j];
		while (j > 0)
		{
			if (a < matrice[i][j - 1])
			{
				a = matrice[i][j - 1];
				compteur++;
			}
			j--;
		}
		if (compteur != (int)p[index++])
			return (0);
		i++;
	}
	return (1);
}
