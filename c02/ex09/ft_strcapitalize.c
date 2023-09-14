/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohseo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 09:38:54 by yohseo            #+#    #+#             */
/*   Updated: 2023/08/30 09:43:20 by yohseo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	prev;

	prev = ' ';
	i = 0;
	while (str[i] != '\0')
	{
		if ((prev >= 'a' && prev <= 'z') || (prev >= 'A' && prev <= 'Z')
			|| (prev >= '0' && prev <= '9'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 'a' - 'A';
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 'a' - 'A';
		}
		prev = str[i++];
	}
	return (str);
}
/*
int main(void)
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";   
	printf("%s\n", ft_strcapitalize(str));
}
*/
