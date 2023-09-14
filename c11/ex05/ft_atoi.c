/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 11:37:48 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 12:05:17 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign(char chr, int *flag)
{
	if (chr == '+')
		return (1);
	else if (chr == '-')
	{
		*flag *= -1;
		return (1);
	}
	else
		return (0);
}

int	is_space(char chr)
{
	if (chr == ' ' || chr == '\t' || chr == '\n'
		|| chr == '\v' || chr == '\f' || chr == '\r')
		return (1);
	else
		return (0);
}

int	get_num(char *num_rev, int n, int is_pos)
{
	long long	num;
	int			pos;

	num = 0;
	pos = 1;
	while (n >= 0)
	{
		num += (num_rev[n--] - '0') * pos;
		pos *= 10;
	}
	return ((int)(num * is_pos));
}

int	ft_atoi(char *str)
{
	int		i;
	int		n;
	int		is_positive;
	char	num_reverse[11];

	i = 0;
	n = 0;
	is_positive = 1;
	while (is_space(str[i]))
		i++;
	while (is_sign(str[i], &is_positive))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (n > 10)
			break ;
		num_reverse[n++] = str[i++];
	}
	return (get_num(num_reverse, n - 1, is_positive));
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	char n[] = "001";
	printf("%d\n", ft_atoi(n));
	printf("%d\n", atoi(n));
}
*/
