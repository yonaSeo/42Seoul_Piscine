/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:23:33 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 11:55:11 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	ch;	

	ch = 'z';
	while (ch >= 'a')
	{
		write(1, &ch, 1);
		ch--;
	}
}
/*
int main(void)
{
	ft_print_reverse_alphabet();
}
*/
