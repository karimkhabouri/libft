/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkhabour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 20:41:14 by kkhabour          #+#    #+#             */
/*   Updated: 2019/04/13 01:29:11 by kkhabour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (!s1 || !s2)
		return (1);
	while (n-- && (*s1 || *s2))
		if (*(char *)s1++ != *(char *)s2++)
			return (0);
	return (1);
}
