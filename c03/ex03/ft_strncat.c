/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:13:47 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/06 17:21:24 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j == nb)
			break ;
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "asdf";
	char b[10] = "qwer";
	printf("%s\n", ft_strncat(a, b, 10));
	char c[10] = "asdf";
	char d[10] = "qwer";
	printf("%s\n", ft_strncat(c, d, 10));
}
*/
