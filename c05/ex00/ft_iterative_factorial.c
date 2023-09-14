/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:15:04 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/08 14:42:37 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	mul;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	mul = 1;
	while (nb--)
	{
		res *= mul;
		mul++;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(3));
}
*/
