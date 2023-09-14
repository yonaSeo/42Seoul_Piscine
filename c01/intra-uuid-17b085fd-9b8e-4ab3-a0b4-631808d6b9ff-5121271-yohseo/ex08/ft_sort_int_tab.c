/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:10:41 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 12:10:12 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - (i + 1))
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
	int arr[] = {2, 6, -2, 3, 7, 4, -5, 0, 5};
	ft_sort_int_tab(arr, 9);
	for (int i = 0; i < 9; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}
*/
