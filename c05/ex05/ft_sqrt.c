/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 13:30:58 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/04 19:33:04 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	make_all_powers(int *arr, int nb)
{
	int	i;

	i = 0;
	while (i <= 46340)
	{
		if (nb < i * i)
			return (i);
		arr[i] = i * i;
		i++;
	}
	return (i);
}

int	ft_sqrt(int nb)
{
	int	arr[46340];
	int	i;
	int	cnt;
	int	res;

	cnt = make_all_powers(arr, nb);
	res = 0;
	i = 0;
	while (i < cnt)
	{
		if (arr[i] == nb)
		{
			res = i;
			break ;
		}
		i++;
	}
	return (res);
}
/*
int main(void)
{
	printf("%d\n", ft_sqrt(2147395600));
}
*/
