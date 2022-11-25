/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:18:51 by pineau            #+#    #+#             */
/*   Updated: 2022/08/18 08:31:37 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	return (a);
}

int	ft_error(char *base)
{
	int	a;
	int	b;

	a = 0;
	while (base[0] == '\0' || base[1] == '\0' || base[a] != '\0')
	{
		if (base[a] == '+' || base[a] == '-')
			return (0);
		a++;
	}
	a = 0;
	b = 1;
	while (base[a] != '\0')
	{
		while (base[b] != '\0')
		{
			if (base[a] == base[b])
				return (0);
			b++;
		}
		a++;
		b = a + 1;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	a;
	unsigned int	b;

	if (ft_error(base) != 0)
	{
		b = ft_strlen(base);
		if (nbr < 0)
		{
			a = -1 * nbr;
			ft_putchar('-');
		}
		else
			a = nbr;
		if (a >= b)
		{
			ft_putnbr_base(a / b, base);
			ft_putnbr_base(a % b, base);
		}
		else
			ft_putchar(base[a]);
	}
}
/*int main()
{
    int a = -2147483648;
    char base[]={"0123456789abcdef"};
    ft_putnbr_base(a, base);

}*/
