/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:10:25 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:58:51 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	void		*d;

	d = dest;
	if (!dest && !src)
		return (dest);
	while (n)
	{
		*(char *)d++ = *(char *)src++;
		n--;
	}
	return (dest);
}

/* int	main(void)
{
	char	src[] = "Hello, World!";
	char	dest[14];
	char	dest2[14];

	ft_memcpy(dest, src, 14);
	memcpy(dest2, src, 14);
	printf("Copied string: %s\n", dest);
	printf("Copied string 2: %s\n", dest2);
	return (0);
} */
