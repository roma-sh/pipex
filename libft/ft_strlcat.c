/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 19:17:51 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 20:51:22 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	t;

	i = 0;
	j = 0;
	if ((!dest || !src) && !size)
		return (0);
	while (*(src + i))
		i++;
	if (size == 0)
		return (i);
	while (*(dest + j) && j < size)
		j++;
	if (j < size)
		t = i + j;
	else
		return (size + i);
	while (*src && (j + 1) < size)
	{
		*(dest + j) = *src++;
		j++;
	}
	*(dest + j) = '\0';
	return (t);
}

/* int	main(void)
{
	size_t	x;
	size_t	y;
	char	a[7] = "World!!";
	char	b[7] = "Hello ";
	char	c[7] = "Hello ";

	x = 0;
	y = 0;
	x = ft_strlcat(b, a, 7);
	y = strlcat(c, a, 7);
	printf("\n");
	printf("     my code: %s\n", b);
	printf("     my code number: %zu\n", x);
	printf("\n");
	printf("orginal code: %s\n", c);
	printf("orginal code number: %zu\n", y);
	printf("\n");
	return (0);
}
 */
