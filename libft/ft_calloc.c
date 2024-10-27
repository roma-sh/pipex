/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 00:54:57 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/14 02:45:36 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t s)
{
	unsigned char	*bu;
	size_t			i;

	i = 0;
	bu = (unsigned char *)malloc(count * s);
	if (!bu)
		return (NULL);
	while (i < (count * s))
	{
		bu[i] = 0;
		i++;
	}
	return ((void *)(bu));
}

/* int	main(void)
{
	size_t	x;
	size_t	size;
	int		*num1;
	int		*num2;
	int		i;

	x = 4;
	size = sizeof(int);
	num1 = ft_calloc(x, size);
	num2 = calloc(x, size);
	if (num1 == NULL)
	{
		printf("MY ERROR!!!\n");
		return (1);
	}
	if (num2 == NULL)
	{
		printf("THEIR ERROR!!!\n");
		return (1);
	}
	printf("   My string: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", num1[i]);
	}
	printf("\n");
	printf("their string: ");
	for (i = 0; i < size; i++)
	{
		printf("%d ", num2[i]);
	}
	printf("\n");
	return (0);
}
 */
