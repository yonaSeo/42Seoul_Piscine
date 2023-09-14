/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:04:46 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 20:44:08 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*arr;

	arr = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>
int	func(int a)
{
	return a * 10;
}

int main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	int *res = ft_map(arr, 5, &func);
	for (int i = 0; i < 5; i++)
		printf("%d ", res[i]);
}
*/
