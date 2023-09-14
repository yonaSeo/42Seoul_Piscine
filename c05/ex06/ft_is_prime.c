/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:56:29 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/11 11:59:04 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_is_prime(-2147483648));
	printf("%d\n", ft_is_prime(2147483647));
	printf("%d\n", ft_is_prime(0));
	printf("%d\n", ft_is_prime(2));
	printf("%d\n", ft_is_prime(10000));
}
*/
