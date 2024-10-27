/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 20:15:33 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/28 02:06:51 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	equal(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (*s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*mllc(int n)
{
	char	*s;

	s = (char *)malloc(n + 1);
	if (!s)
		return (NULL);
	return (s);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		a;
	int		z;
	char	*trimmed;

	i = 0;
	a = 0;
	z = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[a] && equal((s1 + a), set))
		a++;
	while ((z > a) && equal((s1 + z), set))
		z--;
	trimmed = mllc(z - a + 1);
	if (!trimmed)
		return (NULL);
	while (a < z + 1)
	{
		trimmed[i] = s1[a];
		i++;
		a++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}

/* int	main(void)
{
	char	*f = " ";
	char	*s = "    Hello world!    ";
	char	*t;

	t = ft_strtrim(s, f);
	printf("   my trimmed: %s\n", t);
	return (0);
}
 */
