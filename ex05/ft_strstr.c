/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viboujem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 09:27:05 by viboujem          #+#    #+#             */
/*   Updated: 2018/07/16 18:00:48 by viboujem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		l;

	i = 0;
	l = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		l = 0;
		while (to_find[l] == str[i + l])
		{
			if (to_find[l + 1] == '\0')
				return (str + i);
			l++;
		}
		i++;
	}
	return (0);
}
