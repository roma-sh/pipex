/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:47:46 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:59:39 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int a)
{
	if (a >= 65 && a <= 90)
		return (a + 32);
	else
		return (a);
}

/* int	main(void)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;

	a = 'a';
	b = ft_tolower(a);
	c = tolower(a);
	printf("in my code b is: %c\n", b);
	printf("in their code b is: %c\n", c);
	return (0);
}
 */
