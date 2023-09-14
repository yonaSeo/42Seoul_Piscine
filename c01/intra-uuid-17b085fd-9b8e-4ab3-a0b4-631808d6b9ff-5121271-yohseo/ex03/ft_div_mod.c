/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:09:15 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 12:01:55 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int c = 0;
	int d = 0;
	int *div = &c;
	int *mod = &d;
	
	ft_div_mod(13, 2, div, mod);
	printf("%d, %d\n", *div, *mod);
	return 0;
}
*/
