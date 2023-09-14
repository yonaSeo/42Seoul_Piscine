/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:26:27 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/14 16:51:57 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	is_invalid(char *base);

void	negative_proc(long long *nbr, int *first, int *i, int *j)
{
	*nbr *= -1;
	*first = 1;
	*i += 1;
	*j += 1;
}

char	*convert(long long nbr, char *base_num, char *base, int cnt)
{
	int		i;
	int		j;
	int		first;
	char	num_rev[100];

	i = 0;
	j = 0;
	first = 0;
	if (nbr < 0)
	{
		negative_proc(&nbr, &first, &i, &j);
		base_num[0] = '-';
	}
	while (nbr > 0)
	{
		num_rev[i] = base[nbr % cnt];
		nbr /= cnt;
		i++;
	}
	i--;
	while (i >= first)
		base_num[i--] = num_rev[j++];
	return (base_num);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int			cnt;
	int			num;
	long long	num_long;
	char		*base_num;
	char		*zero;

	if (is_invalid(base_from) || is_invalid(base_to))
		return (0);
	base_num = (char *)malloc(sizeof(char) * 100);
	num = ft_atoi_base(nbr, base_from);
	if (num == 0)
	{
		zero = (char *)malloc(sizeof(char) * 2);
		zero[0] = base_to[0];
		zero[1] = '\0';
		return (zero);
	}
	cnt = 0;
	while (base_to[cnt] != '\0')
		cnt++;
	num_long = (long long) num;
	convert(num_long, base_num, base_to, cnt);
	return (base_num);
}

#include <stdio.h>
int main(void)
{
	printf("%s\n", ft_convert_base("0", "0123456789", "567"));
	printf("%s\n", ft_convert_base("fe", "0123456789abcdef", "01"));
	printf("%s\n", ft_convert_base("ff", "0123456789abcdef", "0123456789"));
	printf("%s\n", ft_convert_base("", "0123456789abcdef", "0123456789"));
	printf("%s\n", ft_convert_base("123", "", "0123456789"));
	printf("%s\n", ft_convert_base("123", "0123456789", ""));
	printf("%s\n", ft_convert_base("  +++--++123", "0123456789", "01"));
	return 0;
}
