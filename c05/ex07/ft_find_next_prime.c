/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 17:03:26 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/11 11:58:58 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_prime(int nb)
{
	unsigned int	i;

	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (-1);
		i++;
	}	
	return (nb);
}

int	ft_find_next_prime(int nb)
{
	int	next_prime;
	int	res;

	if (nb < 2)
		return (2);
	res = find_prime(nb);
	if (res != -1)
		return (nb);
	next_prime = nb + 1;
	while (res == -1 && next_prime <= 2147483647)
	{
		res = find_prime(next_prime);
		next_prime++;
	}
	return (res);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_find_next_prime(-2147483648));
	printf("%d\n", ft_find_next_prime(2147483647));
	printf("%d\n", ft_find_next_prime(0));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(4));
	printf("%d\n", ft_find_next_prime(111234));
}
*/
