/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 21:59:03 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 22:10:58 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t x)
{
	if (x == 0)
		return (0);
	while (x)
	{
		if (*(unsigned char *)str1 != *(unsigned char *)str2)
			return (*(unsigned char *)str1 - *(unsigned char *)str2);
		str1++;
		str2++;
		x--;
	}
	return (0);
}

/* int	main(void)
{
	size_t	x;
	size_t	y;
	char	*s1 = "zbz";
	char	*s2 = "azzz";
	x = ft_memncmp(s1, s2, 2);
	y = memcmp(s1, s2, 2);
	printf ("my cmp:%zu\n", x);
	printf ("their cmp:%zu\n", y);
	return (0);
}
 */
