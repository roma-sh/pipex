/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:38:23 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:57:38 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				x;
	unsigned char		*d;

	x = 0;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (dest);
	if (dest == src)
		return (dest);
	if (dest < src)
	{
		while (x < n)
		{
			d[x] = ((char *)src)[x];
			x++;
		}
	}
	else
	{
		while (n--)
		{
			d[n] = ((char *)src)[n];
		}
	}
	return (dest);
}

/* int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[14];
	char	dest2[14];

	ft_memmove(dest, src, 14);
	memmove(dest2, src, 14);
	printf("Copied string: %s\n", dest);
	printf("Copied string 2: %s\n", dest2);
	return (0);
}
 */
