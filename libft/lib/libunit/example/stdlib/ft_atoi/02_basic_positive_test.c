/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_positive_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: starrit <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 21:54:28 by starrit           #+#    #+#             */
/*   Updated: 2017/02/11 23:21:25 by starrit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		basic_positive_test(void)
{
	if (ft_atoi("546") == atoi("546"))
		return (0);
	else
		return (-1);
}
