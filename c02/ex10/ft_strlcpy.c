/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:44:48 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/05 14:38:14 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	cnt;

	i = 0;
	while (i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	cnt = 0;
	while (src[cnt] != '\0')
		cnt++;
	return (cnt);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char dest[9] = "qwerqwer";
	char *src = "asdf";
	printf("%u\n", ft_strlcpy(dest, src, 0));
	printf("%s\n", dest);
	char dest2[9] = "qwerqwer";
	char *src2 = "asdf";
	printf("%lu\n", strlcpy(dest2, src2, 0));
	printf("%s\n", dest2);
}
*/
