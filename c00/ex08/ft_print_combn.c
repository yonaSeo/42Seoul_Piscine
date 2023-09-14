/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:33:50 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/29 11:56:47 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int *arr, int n)
{
	char	*num;
	int		i;

	num = "0123456789";
	i = 0;
	while (i < n)
		write(1, &num[arr[i++]], 1);
	if (arr[0] != 10 - n)
		write(1, ", ", 2);
}

void	recursive_up(int *arr, int n, int max, int i)
{
	int	start;

	if (i == n)
	{
		print_num(arr, n);
		return ;
	}
	if (i == 0)
		start = 0;
	else
		start = arr[i - 1] + 1;
	while (start <= max)
	{
		arr[i] = start;
		recursive_up(arr, n, max + 1, i + 1);
		start++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		arr[i] = i;
		i++;
	}
	recursive_up(arr, n, max, 0);
}
/*
int	main(void)
{
	ft_print_combn(8);
	return (0);
}
*/
