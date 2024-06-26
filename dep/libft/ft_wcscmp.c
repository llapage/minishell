/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wcscmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-clee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 10:45:36 by mde-clee          #+#    #+#             */
/*   Updated: 2023/04/12 10:57:31 by mde-clee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wcscmp(const wchar_t *s1, const wchar_t *s2)
{
	while (*s1)
		if (*s1++ != *s2++)
			return (*--s1 - *--s2);
	return (*s1 - *s2);
}
