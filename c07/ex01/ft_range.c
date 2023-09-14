/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:37:09 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 10:27:40 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	temp;

	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	temp = min;
	while (temp < max)
		arr[i++] = temp++;
	return (arr);
}
/*
#include <stdio.h>
int main(void)
{
	int	*arr;

	arr = ft_range(0, 10);
	for (int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
}
*/
