/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 10:20:56 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/04 17:38:35 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	printf("%d\n", ft_str_is_printable("asdf\nasf"));
}
*/
