/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:38:06 by pineau            #+#    #+#             */
/*   Updated: 2022/09/01 10:00:24 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	sep(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (1);
	return (0);
}

int	count_mot(char *str, char *charset, int mode)
{
	int	i;
	int	count;
	int	toggle;

	i = 0;
	toggle = 0;
	count = 0;
	while (str[i])
	{
		if (sep(str[i], charset) == 1 && toggle == 1)
			toggle = 0;
		if (sep(str[i], charset) == 0 && toggle == 0)
		{
			toggle = 1;
			count++;
		}
		i++;
	}
	//printf("%d count\n", count);
	if (mode == 1)
		return (i);
	return (count);
}

char	*mot(char *str, char *charset, int index)
{
	int		fin;
	int		i;
	char	*word;

	fin = index;
	while (sep(str[fin], charset) == 0)
		fin++;
	word = malloc(sizeof(char) * (fin - index + 1));
	if (!word)
		return (NULL);
	word[fin] = '\0';
	i = 0;
	while (index < fin)
		word[i++] = str[index++];
	return (word);
}

char	**jspfrere(char *str, char *charset, int len, char **tab)
{
	int	i;
	int	toggle;
	int	a;

	i = -1;
	toggle = 0;
	a = -1;
	while (++i < len)
	{
		while (str[++a])
		{
			if (sep(str[a], charset) == 1 && toggle == 1)
				toggle = 0;
			if (sep(str[a], charset) == 0 && toggle == 0)
			{
				toggle = 1;
				tab[i] = mot(str, charset, a);
				break ;
			}
		}
	}
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	int		len;
	char	**tab;

	len = count_mot(str, charset, 0);
	tab = malloc(sizeof(char *) * (len + 1));
	if (!tab)
		return (NULL);
	if (len == 1)
	{
		tab[1] = 0;
		tab[0] = malloc(sizeof(char) * count_mot(str, charset, 1));
		len = -1;
		while (str[++len])
			tab[0][len] = str[len];
		tab[0][len] = '\0';
		return (tab);
	}
	if (len == 0)
	{
		tab[0] = 0;
		//printf("coucou frere");
		return (tab);
	}
	return (jspfrere(str, charset, len, tab));
}
/*int main(void)
{
	char *str = "bonjour les amis";
	char *charset = "bonjour les amis";
	char **tab = ft_split(str, charset);
	int i = -1;
	while (++i <= count_mot(str, charset, 0))
		printf("~%s~\n", tab[i]);
	return 0;
}*/
