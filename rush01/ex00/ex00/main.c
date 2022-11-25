/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gduhau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:20:41 by gduhau            #+#    #+#             */
/*   Updated: 2022/08/21 17:42:11 by lsablon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int		placement(int (*matrice)[4], int position, int *p);
void	ft_putstr(char *str);
void	ft_print_matrice(int (*matrice)[4]);
int		verification_matrice(int (*matrice)[4]);
int		verification_valeurs(char **p);

int	ft_error(void)
{
	ft_putstr("Error\n");
	return (0);
}

int	tab_split(char *str, int *tab)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0 && str[i] > '0' && str[i] < '5')
			tab[i / 2] = str[i] - '0';
		else if (str[i] != ' ')
			return (0);
		i++;
	}
	if (str[31] != '\0')
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int	tab[16];
	int	i;
	int	j;
	int	matrice[4][4];

	j = 0;
	i = 0;
	if (argc != 2 || tab_split(argv[1], tab) == 0)
		return (ft_error());
	while (i < 4)
	{
		while (j < 4)
			matrice[i][j++] = 0;
		j = 0;
		i++;
	}
	placement(matrice, 0, tab);
	if (verification_matrice(matrice) == 0)
		return (ft_error());
	ft_print_matrice(matrice);
	return (0);
}
