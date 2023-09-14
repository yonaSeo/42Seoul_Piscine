/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:01:14 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/07 13:36:36 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (1)
	{
		if (i == n)
			break ;
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	if (str[0] == '\0' && to_find[0] == '\0')
		return (str);
	n = 0;
	while (to_find[n] != '\0')
		n++;
	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_strncmp(&str[i], to_find, n))
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "";
	char b[10] = "";
	printf("%s\n", ft_strstr(a, b));
	char c[10] = "";
	char d[10] = "";
	printf("%s\n", strstr(c, d));
}
*/
