/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:30:52 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/14 10:37:07 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	int		size;
	char	*temp;

	size = 0;
	while (tab[size] != 0)
		size++;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - (i + 1))
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	char *arr[10] = {"aa", "aaa", "zz", "a", "bc", "zx"};
	ft_advanced_sort_string_tab(arr, &ft_strcmp);
	for (int i = 0; i < 6; i++)
		printf("%s ", arr[i]);
}
*/
