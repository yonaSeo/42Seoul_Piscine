/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 12:18:46 by yohseo            #+#    #+#             */
/*   Updated: 2023/09/13 14:54:10 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	ft_putnbr(int nb);

int	is_invalid_op(char *op)
{
	if ((op[0] == '+' || op[0] == '-' || op[0] == '/'
			|| op[0] == '*' || op[0] == '%') && op[1] == '\0')
		return (0);
	return (1);
}

void	ft_do_op(int a, int b, char *op)
{
	int	res;

	res = 0;
	if (op[0] == '+')
		res = a + b;
	else if (op[0] == '-')
		res = a - b;
	else if (op[0] == '*')
		res = a * b;
	else if (op[0] == '/')
		res = a / b;
	else if (op[0] == '%')
		res = a % b;
	ft_putnbr(res);
	write(1, "\n", 1);
}

int	is_zero_calc(char *op, int operand)
{
	if (op[0] == '/' && operand == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	else if (op[0] == '%' && operand == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}
/*
int main(int argc, char **argv)
{
	int a;
	int b;
	int	i;
	char *op;

	if (argc < 2)
		return (0);
	i = 0;
	op = argv[2];
	if (is_invalid_op(op))
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(argv[1]);	
	b = ft_atoi(argv[3]);	
	if (is_zero_calc(op, b))
		return (0);
	ft_do_op(a, b, op);
}
*/
