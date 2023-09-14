/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 16:57:11 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 17:44:31 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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
	write(1, "\n", 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
	write(1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		ft_putstr(par[i].copy);
		i++;
	}
}
