/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:45:01 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 20:52:39 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	cnt;

	i = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			cnt++;
		i++;
	}
	return (cnt);
}

int	func(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '!')
			return (1);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int main(void)
{
	char *arr[10] = {"qw!er", "asdf", "zx!cv"};
	printf("%d\n", ft_count_if(arr, 3, &func));
}
*/
