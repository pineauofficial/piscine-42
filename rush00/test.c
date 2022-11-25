/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 08:00:46 by pineau            #+#    #+#             */
/*   Updated: 2022/08/13 09:48:17 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	abscisse(int x)
{
	int	i;

	i = 2;
	if (x != 0)
	{
		ft_putchar('o');
		while (i < x)
		{
			ft_putchar('-');
			i++;
		}
		if (x > 1)
			ft_putchar('o');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	i = 3;
	if ( y > 0)
	{
		abscisse(x);
		ft_putchar('\n');
	}	
	while (j < y)
	{
		if ( x > 2 || y > 2 )
		{
			ft_putchar('|');
			while (i < x)
			{
				ft_putchar(' ');
				i++;
			}
			ft_putchar('|');
			ft_putchar('\n');
			i = 3;
		}
	j++;
	}
	if (y > 1)
		abscisse(x);

}

int	main()
{
	rush(1, 5);
}
