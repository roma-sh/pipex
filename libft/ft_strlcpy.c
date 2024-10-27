/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 22:40:18 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:59:18 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	size_t	x;
	size_t	y;
	char	a[] = "lorem ipsum dolor sit amet";
	char	b[25];
	char	c[25];

	x = 0;
	y = 0;
	x = ft_strlcpy(b, a, 0);
	y = strlcpy(c, a, 0);
	printf("     my code: %s\n", b);
	printf("     my code number: %zu\n", x);
	printf("orginal code: %s\n", c);
	printf("orginal code number: %zu\n", y);
	return (0);
}

 */
