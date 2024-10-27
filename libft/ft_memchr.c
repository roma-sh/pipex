/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:46:02 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 21:57:59 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)(s) == (unsigned char)c)
			return ((void *)s);
		n--;
		s++;
	}
	return (NULL);
}

/* int	main(void)
{
	char		*s = "Hello world!";
	char		a = 'n';
	const char	*found1;
	const char	*found2;

	found1 = ft_memchr(s, a, 50);
	found2 = memchr(s, a, 50);
	printf(" my results: %s\n", found1);
	printf(" their results: %s\n", found2);
	return (0);
}
 */
