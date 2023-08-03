/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzhukova <mzhukova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:17:42 by mzhukova          #+#    #+#             */
/*   Updated: 2023/07/13 09:45:21 by mzhukova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
		write(1, &a, 1);
	}
	else
	{
		a = 'P';
		write(1, &a, 1);
	}
}