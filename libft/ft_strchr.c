/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:06:01 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/15 04:24:06 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}

/* int	main(void)
{
	char		*s = "Hello world!";
	char		a = 'n';
	const char	*found1;
	const char	*found2;

	found1 = ft_strchr(s, a);
	found2 = strchr(s, a);
	printf(" my results: %s\n", found1);
	printf(" their results: %s\n", found2);
	return (0);
}
 */
