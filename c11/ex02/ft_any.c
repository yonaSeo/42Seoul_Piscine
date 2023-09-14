/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:13:44 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 20:43:55 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) > 0)
			return (1);
		i++;
	}
	return (0);
}
/*
int func(char *str)
{
	return (str[0] - 'x');
}

#include <stdio.h>
int main(void)
{
	char *arr[10] = {"asdf", "qwer", "zxcv"};
	printf("%d\n", ft_any(arr, &func));
}
*/
