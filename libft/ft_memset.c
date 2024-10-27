/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 23:17:38 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:58:59 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int x, size_t y)
{
	unsigned char	*m;
	size_t			i;

	i = 0;
	m = (unsigned char *)s;
	while (i < y)
	{
		m[i] = x;
		i++;
	}
	return (s);
}

/* int	main(void)
{
	char	l[] = "HELLO";

	ft_memset(l, 97, 3);
	printf("%s\n", l);
	return (0);
}
 */
