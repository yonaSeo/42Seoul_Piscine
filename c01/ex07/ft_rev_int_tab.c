/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:51:27 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 12:02:30 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}
/*
int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 8, 7, 6};
	ft_rev_int_tab(arr, 8);
	for (int i = 0; i < 8; i++)
		printf("%d ", arr[i]);
	return 0;
}
*/
