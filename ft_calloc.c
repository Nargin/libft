/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:27:27 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/09 11:32:26 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*array;

	if (!n || !size)
		ft_calloc(1, 1);
	if (n * size / n != size)
		return (0);
	array = malloc(n * size);
	if (array)
		ft_bzero(array, n * size);
	return (array);
}
