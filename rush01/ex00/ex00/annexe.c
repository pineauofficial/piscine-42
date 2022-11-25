/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annexe.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:40:47 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/21 18:24:57 by lsablon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	verification_valeurs(char **p)
{
	int	index;

	index = 0;
	while (index < 16)
	{
		if ((!(p[index][0] > '0' && p[index][0] < '5')) || p[index][1] != '\0')
			return (0);
		p[index][0] -= '0';
		index++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		write(1, &c, 1);
		i++;
	}
}

int	verification_matrice(int (*matrice)[4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			if (matrice[i][j] == 0)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

void	ft_print_matrice(int (*matrice)[4])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			ft_putchar(matrice[i][j] + '0');
			if (j != 3)
				ft_putstr(" ");
			j++;
		}	
		j = 0;
		ft_putstr("\n");
		i++;
	}
}
