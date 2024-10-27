/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:15:40 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 21:37:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t x)
{
	if (x == 0)
		return (0);
	while (*str1 && *str2 && *str1 == *str2 && x > 1)
	{
		str1++;
		str2++;
		x--;
	}
	return ((unsigned char)(*str1) - (unsigned char)(*str2));
}

/* int	main(void)
{
	size_t	x;
	size_t	y;
	char	*s1 = "zbz";
	char	*s2 = "azzz";
	x = ft_strncmp(s1, s2, 2);
	y = strncmp(s1, s2, 2);
	printf ("my cmp:%zu\n", x);
	printf ("their cmp:%zu\n", y);
	return (0);
}
 */
