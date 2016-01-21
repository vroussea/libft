/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 11:37:31 by vroussea          #+#    #+#             */
/*   Updated: 2015/12/02 23:12:54 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (ft_strlen(s1) >= n && ft_strlen(s2) >= n)
		return (ft_memcmp(s1, s2, n));
	if (ft_strlen(s1) > ft_strlen(s2))
		return (ft_memcmp(s1, s2, ft_strlen(s2) + 1));
	else
		return (ft_memcmp(s1, s2, ft_strlen(s1) + 1));
}
