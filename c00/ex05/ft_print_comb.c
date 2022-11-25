/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 13:24:13 by pineau            #+#    #+#             */
/*   Updated: 2022/08/11 15:52:00 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_bloc(char a, char b, char c)
{
	while (a <= '7')
	{
		while (b < '8')
		{
			c = b + 1;
			b++;
			while (c < '9' )
			{
				c++;
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7')
					write (1, ", ", 2);
			}
		}
		b = a + 1;
		a++;
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '0';
	c = '2';
	ft_bloc(a, b, c);
}
