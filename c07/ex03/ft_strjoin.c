/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 20:01:33 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 21:59:32 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	assign(char **dest, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (i < size)
	{
		while (strs[i][j] != '\0')
			(*dest)[k++] = strs[i][j++];
		if ((i + 1) != size)
			while (sep[l] != '\0')
				(*dest)[k++] = sep[l++];
		j = 0;
		l = 0;
		i++;
	}
	(*dest)[k] = '\0';
}

int	get_size(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	cnt;

	i = 0;
	j = 0;
	cnt = 0;
	while (i < size)
	{
		while (strs[i][j++] != '\0')
			cnt++;
		j = 0;
		i++;
	}
	i = 0;
	while (sep[i] != '\0')
		i++;
	cnt += i * (size - 1);
	return (cnt);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret_str;
	int		ret_size;

	if (size == 0)
	{
		ret_str = (char *)malloc(1);
		ret_str[0] = '\0';
		return (ret_str);
	}
	ret_size = get_size(size, strs, sep);
	ret_str = (char *)malloc(sizeof (char) * ret_size + 1);
	assign(&ret_str, size, strs, sep);
	return (ret_str);
}
/*
#include <stdio.h>
int main(void)
{
	char *a[20] = {"qwer", "asdf", "zxcv"};
	printf("%s\n", ft_strjoin(3, a, "!!!"));	
	return 0;
}
*/
