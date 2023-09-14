/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:00:36 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/04 18:07:13 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(unsigned char to_be_hex)
{
	char	*hex;
	char	changed[3];

	hex = "0123456789abcdef";
	changed[1] = hex[(to_be_hex % 16)];
	to_be_hex /= 16;
	changed[0] = hex[(to_be_hex % 16)];
	write(1, "\\", 1);
	write(1, changed, 2);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			print_hex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	unsigned char str[256];
	for(int i = 0; i < 255; i++)
		str[i] = i + 1;
	str[255] = 0;
	ft_putstr_non_printable((char *)str);
}
*/
