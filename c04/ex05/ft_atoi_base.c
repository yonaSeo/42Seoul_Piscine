/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:25:28 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/11 14:56:45 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '+' || base[i] == '-'
			|| base[i] == ' ' || base[i] == '\t' || base[i] == '\n'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
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

int	is_space_or_sign(char chr, int *flag, int option)
{
	if (option == 1)
	{
		if (chr == ' ' || chr == '\t' || chr == '\n'
			|| chr == '\v' || chr == '\f' || chr == '\r')
			return (1);
		else
			return (0);
	}
	else
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
}

int	is_base_elem(char chr, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == chr)
			return (1);
		i++;
	}
	return (0);
}

int	get_num(char *num_rev, char *base, int n, int is_pos)
{
	long long	num;
	int			base_cnt;
	int			pos;
	int			i;

	base_cnt = 0;
	while (base[base_cnt] != '\0')
		base_cnt++;
	pos = 1;
	num = 0;
	while (n >= 0)
	{
		i = 0;
		while (base[i] != num_rev[n])
			i++;
		num += i * pos;
		pos *= base_cnt;
		n--;
	}
	return ((int)(num * is_pos));
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		n;
	int		is_positive;
	char	num_reverse[100];

	if (is_invalid(base))
		return (0);
	i = 0;
	n = 0;
	is_positive = 1;
	while (is_space_or_sign(str[i], &is_positive, 1))
		i++;
	while (is_space_or_sign(str[i], &is_positive, 2))
		i++;
	while (is_base_elem(str[i], base))
		num_reverse[n++] = str[i++];
	return (get_num(num_reverse, base, n - 1, is_positive));
}
/*
#include <stdio.h>
int	main(void)
{
	char b[] = "  ---+---+111111111111111111111111111111123BabB567";
	char n[] = "  ---+---+1111";
	printf("%d\n", ft_atoi_base(n, "01"));
	printf("%d\n", ft_atoi_base(b, "01"));
	brintf("%d\n", ft_atoi_base(n, "0 1"));
	printf("%d\n", ft_atoi_base(n, "0\r1"));
	printf("%d\n", ft_atoi_base(n, "0+1"));
	printf("%d\n", ft_atoi_base(n, "0-1"));
	printf("%d\n", ft_atoi_base(n, "010"));
	printf("%d\n", ft_atoi_base(n, "0"));
	printf("%d\n", ft_atoi_base(n, ""));
}
*/
