/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:17:45 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/05 13:40:25 by yohseo           ###   ########.fr       */
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

	i = argc - 1;
	while (i > 0)
	{
		print_arg(argv[i]);
		i--;
	}
	return (0);
}
