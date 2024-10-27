/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:10:24 by rshatra           #+#    #+#             */
/*   Updated: 2024/03/13 17:23:43 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t s)
{
	size_t	i;

	i = 0;
	if (!haystack && !s)
		return (NULL);
	if (needle[0] == '\0' && !s)
		return ((char *)haystack);
	if (!s)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (*haystack && s--)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i) && *(needle + i) && i <= s)
		{
			if (!*(needle + i + 1))
				return ((char *)haystack);
			i++;
		}
		haystack++;
	}
	return (NULL);
}

/* int	main(void)
{
	char	*bos = "MZIRIBMZIRIBMZE123";
	char	*bb = "MZIRIBMZE";

	printf("my results are:%s\n", ft_strnstr (bos, bb, 9));
	printf("their results are:%s\n", strnstr (bos, bb, 9));
	return (0);
}
 */
