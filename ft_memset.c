/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:05:48 by csilva-r          #+#    #+#             */
/*   Updated: 2024/04/22 15:35:59 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memset(void *s, int c, size_t n)
{
	int		i;
	char	*set;

	i = 0;
	set = (char *)s;
	while (i < (int)n)
	{
		set[i] = c;
		i++;
	}
	return (s);
}
