/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilva-r <csilva-r@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:59:26 by csilva-r          #+#    #+#             */
/*   Updated: 2024/04/22 16:03:35 by csilva-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_c;
	char	*dest_c;
	int		i;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	while (i < (int)n)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
