/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:41:43 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/12 14:35:52 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copied;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copied = (char *)malloc(sizeof(char) * (i + 1));
	if (!copied)
		return (0);
	i = 0;
	while (src[i])
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char	*a = "";
	char	*b;
	char	*c;

	b = ft_strdup(a);
	c = strdup(a);
	printf("%s\n", b);
	printf("%s\n", c);
	printf("%c\n", b[5]);
	printf("%c\n", c[5]);
	return 0;
}
*/
