/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 10:42:05 by enradcli          #+#    #+#             */
/*   Updated: 2019/06/21 12:39:22 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	x;

	x = 0;
	if (s)
	{
		while (s[x])
		{
			(*f)(x, &s[x]);
			x++;
		}
	}
}
