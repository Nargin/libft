/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romaurel <rxonrgn@gmail.com>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 05:44:51 by romaurel          #+#    #+#             */
/*   Updated: 2022/12/12 11:34:25 by romaurel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char s1, const char *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (set[i] == s1)
			return (1);
	return (0);
}

static size_t	count_mem(char const *s1, const char *set)
{
	size_t	i;
	size_t	f;

	i = -1;
	f = 0;
	while (is_set(s1[++i], set) && s1[i])
		f++;
	i = ft_strlen(s1);
	if (f != i)//return (0);
		while (is_set(s1[--i], set) && i > 0)
			f++;
	return (f);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	l;
	char	*n;

	if (!set)
		return ((char *)s1);
	if (count_mem(s1, set) == ft_strlen(s1) || !s1)
		return (ft_strdup(""));
	i = 0;
	l = 0;
	n = malloc(((ft_strlen(s1) - count_mem(s1, set)) + 1) * sizeof(char));
	if (!n)
		return (NULL);
	while (is_set(s1[i], set) && s1[i])
		i++;
	while (l < ft_strlen(s1) - count_mem(s1, set) && s1[i])
		n[l++] = s1[i++];
	n[l] = 0;
	return (n);
}
