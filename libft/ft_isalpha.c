/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:15:06 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/12 19:58:15 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
		return (1);
	else
		return (0);
}

/* int	main(void)
{
	char	x;
	int		y;
	int		z;

	x = 'y';
	y = 0;
	y = ft_isalpha(x);
	z = isalpha(x);
	printf("my result: %d\n", y);
	printf("their result: %d\n", z);
	if (y == 1)
		printf("This is a character\n");
	else
		printf("This is NOT a character\n");
}
 */
