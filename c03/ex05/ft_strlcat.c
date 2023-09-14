/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:23:01 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/08 14:54:17 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	dest_len = i;
	while (src[j] != '\0')
	{
		if (i + 1 >= size)
			break ;
		dest[i++] = src[j++];
	}
	while (src[j] != '\0')
		j++;
	dest[i] = '\0';
	if (size < dest_len)
		return (size + j);
	else
		return (dest_len + j);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[10] = "a";
	char b[10] = "";
	printf("%d\n", ft_strlcat(a, b, 0));
	printf("%s\n", a);
	char c[10] = "a";
	char d[10] = "";
	printf("%lu\n", strlcat(c, d, 0));
	printf("%s\n", c);
}
*/
