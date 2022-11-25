/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:17:31 by pineau            #+#    #+#             */
/*   Updated: 2022/08/18 08:23:38 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_positif(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (str[a] < '0' || str[a] > '9')
	{
		if (str[a] == '-')
			b++;
		a++;
	}
	b = b % 2;
	if (b == 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while ((str[a] >= 9 && str[a] <= 13) || (str[a] == 32))
	{
		a++;
	}
	while (str[a] == 45 || str[a] == 43)
	{
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		b = b * 10 + (str[a] - '0');
		a++;
	}
	if (is_positif(str) == 1)
		b = b * (-1);
	if (b > 0 || b < 0)
		return (b);
	else
		return (0);
}
/*int main()
{
    char str[]={" -+++-123456"};
    printf("%d", ft_atoi(str));
}*/
