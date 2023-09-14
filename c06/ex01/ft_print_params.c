/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:06:34 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/05 13:35:58 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_arg(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		print_arg(argv[i]);
		i++;
	}
	return (0);
}
