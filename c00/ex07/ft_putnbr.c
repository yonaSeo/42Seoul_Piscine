/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 16:41:43 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/11 10:53:55 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	reverse_print(char *str_num, int nb)
{
	int	i;

	i = 0;
	while (nb > 0)
	{
		str_num[i++] = nb % 10 + '0';
		nb /= 10;
	}
	i--;
	while (i >= 0)
	{
		write(1, &str_num[i], 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	char	str_num[11];

	if (nb > 0)
		reverse_print(str_num, nb);
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			reverse_print(str_num, -nb);
		}
	}
}
/*
int main(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(99000000);
	printf("\n");
	ft_putnbr(100);
	return 0;
}
*/
