/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip_spaces.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llapage <llapage@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 14:41:11 by mde-clee          #+#    #+#             */
/*   Updated: 2023/09/28 12:20:35 by mde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_spaces(char **s)
{
	if ((!(s)) || (!(*s)))
		return ;
	while (ft_isspace(**s))
		(*s)++;
}