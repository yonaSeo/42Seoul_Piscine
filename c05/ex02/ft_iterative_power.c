/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 12:45:19 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/04 13:06:22 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	res = 1;
	while (power--)
		res *= nb;
	return (res);
}
/*
int main(void)
{
	printf("%d\n", ft_iterative_power(2, 10));
}
*/
