/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 23:34:17 by pineau            #+#    #+#             */
/*   Updated: 2022/08/14 23:53:37 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while ((s1[a] == s2[a]) && s1[a] != '\0' && s2[a] != '\0')
		a++;
	return (s1[a] - s2[a]);
}
