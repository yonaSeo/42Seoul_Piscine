/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:56:26 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/31 18:09:41 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	plus(char *numbers)
{
	if (numbers[2] < '9')
		numbers[2]++;
	else
	{
		if (numbers[1] < '8')
		{
			numbers[1]++;
			numbers[2] = numbers[1] + 1;
		}
		else
		{
			if (numbers[0] < '7')
			{
				numbers[0]++;
				numbers[1] = numbers[0] + 1;
				numbers[2] = numbers[1] + 1;
			}
		}
	}
	return ;
}

void	ft_print_comb(void)
{
	char	numbers[4];

	numbers[0] = '0';
	numbers[1] = '1';
	numbers[2] = '2';
	while (1)
	{
		write(1, numbers, 3);
		write(1, ", ", 2);
		plus(numbers);
		if (numbers[0] == '7' && numbers[1] == '8' && numbers[2] == '9')
			break ;
	}
	write(1, numbers, 3);
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
