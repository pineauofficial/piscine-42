/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 08:40:04 by pineau            #+#    #+#             */
/*   Updated: 2022/08/30 12:01:11 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
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
		if (base[a] == 32 || (base[a] >= 9 && base[a] <= 13))
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

int	ft_check(char *base, char c)
{
	int	a;
	
	a = 0;
	while (base[a] != '\0')
	{
		if (c == base[a])
			return (a);
		a++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (ft_error(base) == 0)
		return (0);
	while ((str[a] >= 9 && str[a] <= 13) || (str[a] == 32))
		a++;
	while (str[a] == 45 || str[a] == 43)
		a++;
	while (ft_check(base, str[a]) >= 0)
	{
		b = b * ft_strlen(base) + (ft_check(base, str[a]));
		a++;
	}
	if (is_positif(str) == 1)
		b = b * (-1);
	if (b > 0 || b < 0)
		return (b);
	else
		return (0);
}
int main ()
{
    char str[]={"10"};
    char base[]={"0123456789abcdef"};
    printf("%d", ft_atoi_base(str, base));
    
}
