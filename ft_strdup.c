/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 14:41:01 by jsobel            #+#    #+#             */
/*   Updated: 2018/04/12 15:42:18 by jsobel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*c;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
		i++;
	if (!(c = malloc(i + 1)))
		return (NULL);
	i = 0;
	while (s[i])
	{
		c[i] = s[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
