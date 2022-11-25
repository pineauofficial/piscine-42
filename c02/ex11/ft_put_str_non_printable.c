/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_str_non_printable.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 08:55:08 by pineau            #+#    #+#             */
/*   Updated: 2022/08/15 11:07:49 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_block(char c, char *str)
{
	
}

void	ft_putstr_non_printable(char *str)
{
	int		a;
	char	c;

	a = 0;
	while (str[a] != '\0')
	{
		c = str[a];
		if (c >= 0 && c <= 9)
		{
			write(1, "\\", 1);
			write(1, "0", 1);
			c = c + 48;
			write(1, &c, 1);
		}
		else if ((c < 32 && c > 9) || (c == 127))
		{
			write(1, "\\", 1);
			c = (c / 16) + 48;
			write(1, &c, 1);
			c = str[a];
			c = (c % 16) + 87;
			write(1, &c, 1);
		}
		else
			write(1, &c, 1);
	a++;
	}
}
/*int main()
{
    char    str[]={"Coucou\atu vas bien ?"};
    ft_putstr_non_printable(str);
}*/
