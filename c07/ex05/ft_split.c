/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:55:51 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/14 16:34:56 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_sep(char chr, char *charset)
{
	int	i;

	i = 0;
	if (chr == '\0')
		return (1);
	while (charset[i] != '\0')
	{
		if (chr == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strndup(char *src, int n)
{
	char	*copied;
	int		i;

	copied = (char *)malloc(sizeof(char) * (n + 1));
	i = 0;
	while (i < n)
	{
		copied[i] = src[i];
		i++;
	}
	copied[i] = '\0';
	return (copied);
}

void	initialize(char *prev, int *prev_loc, int *i, int *j)
{
	*prev = '\0';
	*prev_loc = -1;
	*i = 0;
	*j = 0;
}

char	**alloc_strs(char **strs, char *str, char *charset, int size)
{
	char	prev;
	int		prev_loc;
	int		dist;
	int		i;
	int		j;

	initialize(&prev, &prev_loc, &i, &j);
	while (i < size)
	{
		if (check_sep(str[j], charset))
		{
			if (!check_sep(prev, charset))
			{
				dist = j - prev_loc - 1;
				strs[i++] = ft_strndup(&str[prev_loc + 1], dist);
			}
			prev_loc = j;
		}
		prev = str[j++];
	}
	strs[i] = 0;
	return (strs);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**splitted_strs;
	char	prev;
	int		i;

	size = 0;
	prev = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		if (check_sep(str[i], charset) && !check_sep(prev, charset))
			size++;
		prev = str[i];
		i++;
	}
	if (i - 1 >= 0 && !check_sep(str[i - 1], charset))
		size++;
	splitted_strs = (char **)malloc(sizeof(char *) * (size + 1));
	alloc_strs(splitted_strs, str, charset, size);
	return (splitted_strs);
}

#include <stdio.h>
int	main(void)
{
	char **arr;
	printf("asdf\n");
	arr = ft_split("asdf", "f");
	int i = 0;
	while (arr[i] != 0)
	{
		printf("%s\n", arr[i]);
		i++;
	}
}
