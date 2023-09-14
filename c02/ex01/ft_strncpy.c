/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 11:13:05 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/06 10:23:38 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (i >= n)
			break ;
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "asdasdf";
	char b[10] = "zxc";
	printf("%s\n", ft_strncpy(a, b, 3));
	char c[10] = "asdasdf";
	char d[10] = "zxc";
	printf("%s\n", strncpy(c, d, 3));
	return 0;
}
*/
