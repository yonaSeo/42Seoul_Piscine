/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:40:06 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 09:35:05 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row_ascending(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('A');
		else if (col == x)
			ft_putchar('C');
		else
			ft_putchar('B');
		col++;
	}
	ft_putchar('\n');
}

void	print_row_descending(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('C');
		else if (col == x)
			ft_putchar('A');
		else
			ft_putchar('B');
		col++;
	}
	ft_putchar('\n');
}

void	print_row_b(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1 || col == x)
			ft_putchar('B');
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
			if (row == 1)
				print_row_ascending(x);
			else if (row == y)
				print_row_descending(x);
			else
				print_row_b(x);
			row++;
		}
	}
	else
	{
		return ;
	}
}
