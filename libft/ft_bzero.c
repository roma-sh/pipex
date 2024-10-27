/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 17:27:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:58:03 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t x)
{
	unsigned char	*ss;
	size_t			xx;

	xx = 0;
	ss = (unsigned char *)s;
	while (xx < x)
	{
		ss[xx] = 0;
		xx++;
	}
}

/* int	main(void)
{
	char	l[] = "HELLO";

	ft_bzero(l, 0);
	printf("%s\n", l);
	return (0);
} */
