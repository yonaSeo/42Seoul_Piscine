/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:40:06 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/26 19:54:12 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_row_top(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('/');
		else if (col == x)
			ft_putchar('\\');
		else
			ft_putchar('*');
		col++;
	}
	ft_putchar('\n');
}

void	print_row_bottom(int x)
{
	int	col;

	col = 1;
	while (col <= x)
	{
		if (col == 1)
			ft_putchar('\\');
		else if (col == x)
			ft_putchar('/');
		else
			ft_putchar('*');
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
			ft_putchar('*');
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
				print_row_top(x);
			else if (row == y)
				print_row_bottom(x);
			else
				print_row_mid(x);
			row++;
		}
	}
	else
	{
		return ;
	}	
}
