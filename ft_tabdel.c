/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/31 22:17:44 by vroussea          #+#    #+#             */
/*   Updated: 2016/03/31 22:19:49 by vroussea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(void **tab)
{
	while (*tab != NULL)
	{
		ft_memdel(*tab);
		tab++;
	}
	ft_memdel(tab);
}
