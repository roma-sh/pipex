/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 20:03:24 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/15 04:32:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = s;
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	else
		return ((char *)str);
	return (NULL);
}

/* int	main(void)
{
	char		*s = "aaaa";
	char		a = 'z';
	const char	*found1;
	const char	*found2;

	found1 = ft_strrchr(s, a);
	found2 = strrchr(s, a);
	printf(" my results: %s\n", found1);
	printf(" their results: %s\n", found2);
	return (0);
} */
