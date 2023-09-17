/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:40:06 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/26 19:52:22 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row_tb(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('o');
		else
			ft_putchar('-');
		col++;
	}
	ft_putchar('\n');
}

void	print_row_mid(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('|');
		else
			ft_putchar(' ');
		col++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	row = 1;
	if (0 < x && 0 < y)
	{
		while (row <= y)
		{
			if (row == 1 || row == y)
				print_row_tb(x);
			else
				print_row_mid(x);
			row++;
		}
	}
}
