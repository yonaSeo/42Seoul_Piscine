/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 18:20:54 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 22:56:46 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;	

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;
	t_stock_str	stock;

	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock.size = ft_strlen(av[i]);
		stock.str = av[i];
		stock.copy = (char *)malloc(stock.size + 1);
		ft_strcpy(stock.copy, av[i]);
		arr[i] = stock;
		i++;
	}
	stock.str = 0;
	stock.size = 0;
	stock.copy = 0;
	arr[i] = stock;
	return (arr);
}
/*
#include <stdio.h> 
int main(void)
{
	char *a[10] = {"asdfasf", "asdf", "zxcv", ""};
	t_stock_str *b = ft_strs_to_tab(4, a);
	for (int i = 0; i < 4; i++)
	{
		printf("size: %d\n", b[i].size);
		printf("str : %s(%p)\n", b[i].str, b[i].str);
		printf("copy: %s(%p)\n", b[i].copy, b[i].copy);
		printf("\n");
	}
	ft_show_tab(b);
}
*/
