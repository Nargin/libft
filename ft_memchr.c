/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 04:51:16 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/09 16:45:16 by rxonrgn          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *mb, int c, size_t size)
{
	int	i;

	i = -1;
	while (size--)
		if (((unsigned char *)mb)[++i] == (unsigned char) c)
			return (((unsigned char *)mb) + i);
	return (NULL);
}
