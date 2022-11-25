/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:57:07 by pineau            #+#    #+#             */
/*   Updated: 2022/08/18 08:36:14 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	a;

	a = nb;
	if (nb < 0)
	{
		a = -1 * nb;
		ft_putchar('-');
	}
	if (a > 9)
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
	if (a <= 9)
		ft_putchar('0' + a);
}
/*int main()
{
    int nb = -123456;
    ft_putnbr(nb);
}*/
