/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:41:03 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 10:33:01 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	temp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *)malloc(sizeof (int) * (max - min));
	i = 0;
	temp = min;
	while (temp < max)
		(*range)[i++] = temp++;
	return (max - min);
}
/*
#include <stdio.h>
int main(void)
{
	int *arr;	
	printf("%d\n", ft_ultimate_range(&arr, 2, 13));
	for (int i = 0; i < 20; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/
