/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 22:13:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:59:46 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 97 && a <= 122)
		return (a - 32);
	else
		return (a);
}

/* int	main(void)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;

	a = 'z';
	b = ft_toupper(a);
	c = toupper(a);
	printf("in my code b is: %c\n", b);
	printf("in their code b is: %c\n", c);
	return (0);
} */
