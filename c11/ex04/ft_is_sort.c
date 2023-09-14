/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:54:30 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 11:05:56 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i + 1 < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	compare(int a, int b)
{
	return (a - b);
}
/*
#include <stdio.h>
int main(void)
{
	int	arr[] = {1, 1, 2, 3, 4, 5};
	printf("%d\n", ft_is_sort(arr, 6, &compare));
}
*/
