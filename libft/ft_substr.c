/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 02:49:06 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 04:09:47 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	ls;

	i = 0;
	ls = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > ls)
		len = 0;
	else if (len > ls - start)
		len = ls - start;
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	while (len--)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = 0;
	return (sub);
}
