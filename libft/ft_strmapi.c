/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 02:49:50 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/15 03:02:56 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*mllc(size_t x)
{
	char	*s;

	s = (char *)malloc(x + 1);
	if (!s)
		return (NULL);
	return (s);
}

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	str = mllc(size);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
