/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejoie <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 00:12:25 by ejoie             #+#    #+#             */
/*   Updated: 2020/02/04 21:44:56 by ejoie            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i] != 0)
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j] == str[i + j])
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
