/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 13:43:42 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/09 10:37:56 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	input(int num, char *s_num)
{
	if (num < 10)
	{
		s_num[0] = '0';
		s_num[1] = num + '0';
	}
	else
	{
		s_num[0] = num / 10 + '0';
		s_num[1] = num % 10 + '0';
	}
}

void	num_print(int *num)
{
	char	first[3];
	char	second[3];

	input(num[0], first);
	input(num[1], second);
	write(1, first, 2);
	write(1, " ", 1);
	write(1, second, 2);
}

void	plus(int *num)
{
	if (num[1] < 99)
	{
		num[1]++;
		num_print(num);
		write(1, ", ", 2);
		plus(num);
	}
	else if (num[0] < 98)
	{
		num[0]++;
		num[1] = num[0] + 1;
		num_print(num);
		if (num[0] != 98)
			write(1, ", ", 2);
		plus(num);
	}
	else
		return ;
}

void	ft_print_comb2(void)
{
	int		number[2];

	number[0] = 0;
	number[1] = 0;
	plus(number);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
