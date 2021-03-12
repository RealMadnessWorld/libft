/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarsenio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 17:21:33 by jarsenio          #+#    #+#             */
/*   Updated: 2021/03/05 18:55:44 by jarsenio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	char		*temp;
	size_t		i;

	temp = str;
	i = 0;
	while (i < n)
	{
		temp[i] = 0;
		i++;
	}
}
