/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 09:15:59 by pineau            #+#    #+#             */
/*   Updated: 2022/08/25 10:16:21 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a++]);
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = 0;
	while (argc > a)
	{
		ft_putstr(argv[a]);
		ft_putchar('\n');
			a++;
	}
	return (0);
}
