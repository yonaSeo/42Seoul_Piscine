/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 10:26:07 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/07 13:32:52 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int *board)
{
	int		i;
	char	num;

	i = 0;
	while (i < 10)
	{
		num = board[i] + '0';
		write(1, &num, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	check_vailid(int *board, int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (board[i] == col)
			return (0);
		if (i - board[i] == row - col)
			return (0);
		if (i + board[i] == row + col)
			return (0);
		i++;
	}
	return (1);
}

void	make_board(int *board, int row, int col, int *cnt)
{
	if (col > 9)
		return ;
	if (row > 9 && col == 0)
	{
		*cnt += 1;
		print_board(board);
		return ;
	}
	if (!check_vailid(board, row, col))
		return ;
	board[row] = col;
	col = 0;
	while (col < 10)
		make_board(board, row + 1, col++, cnt);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	col;
	int	cnt;

	col = 0;
	while (col < 10)
		make_board(board, 0, col++, &cnt);
	return (cnt);
}
/*
#include <stdio.h>
int main(void)
{
	ft_ten_queens_puzzle();
	return (0);
}
*/
