/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhoke <rhoke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 14:04:25 by rhoke             #+#    #+#             */
/*   Updated: 2021/10/09 14:04:25 by rhoke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	char	*p;

	p = (char *)src;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (src);
}
