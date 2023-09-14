/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:52:07 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/06 17:21:34 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char a[10] = "asdf";
	char b[10] = "qwer";
	printf("%s\n", ft_strcat(a, b));
	char c[10] = "asdf";
	char d[10] = "qwer";
	printf("%s\n", strcat(c, d));
	return (0);
}
*/
