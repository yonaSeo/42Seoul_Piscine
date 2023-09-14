/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:18:28 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/11 14:56:58 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_invalid(char *base)
{
	int	i;
	int	arr[128];

	i = 0;
	while (i < 128)
		arr[i++] = 0;
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		arr[base[i] + 0]++;
		i++;
	}
	if (i < 2)
		return (1);
	i = 0;
	while (i < 128)
		if (arr[i++] > 1)
			return (1);
	return (0);
}

void	print_num(long long nbr, char *base_num, char *base, int cnt)
{
	int	i;

	i = 0;
	while (nbr > 0)
	{
		base_num[i] = base[nbr % cnt];
		nbr /= cnt;
		i++;
	}
	i--;
	while (i >= 0)
		write(1, &base_num[i--], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			cnt;
	long long	nbr_long;
	char		base_num[100];

	if (is_invalid(base))
		return ;
	cnt = 0;
	while (base[cnt] != '\0')
		cnt++;
	if (nbr == 0)
	{
		write(1, &base[0], 1);
		return ;
	}
	nbr_long = (long long) nbr;
	if (nbr_long < 0)
	{
		nbr_long *= -1;
		write(1, "-", 1);
	}
	print_num(nbr_long, base_num, base, cnt);
}
/*
int	main(void)
{
	ft_putnbr_base(255, "0123456789");
	write(1, "\n", 1);
	ft_putnbr_base(-0, "12");
	write(1, "\n", 1);
	ft_putnbr_base(255, "ab");
	write(1, "\n", 1);
	ft_putnbr_base(2147483647, "01");
	write(1, "\n", 1);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(-255, "0123456789ABCDEF");
	write(1, "\n", 1);
	ft_putnbr_base(255, "poneyvif");
	write(1, "\n", 1);
	ft_putnbr_base(10000, "01234567890");
	write(1, "\n", 1);
	ft_putnbr_base(10000, "01234567+89");
	write(1, "\n", 1);
	ft_putnbr_base(10000, "01234567-89");
	write(1, "\n", 1);
	ft_putnbr_base(10000, "0");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write(1, "\n", 1);
}
*/
