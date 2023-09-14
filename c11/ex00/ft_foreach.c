/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:54:23 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 20:44:20 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}
/*
#include <stdio.h>
void	func(int a)
{
	printf("%d\n", a);
}

int main(void)
{
	int	arr[] = {1, 2, 3, 4, 5};
	ft_foreach(arr, 5, &func);
}
*/
