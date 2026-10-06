/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 21:56:46 by ehorvat           #+#    #+#             */
/*   Updated: 2026/10/05 22:16:44 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/parsing.h"

long	ft_atol(char *s)
{
	long	nbr;
	int		digit;

	if (*s == '+')
		s++;
	nbr = 0;
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (nbr > (LONG_MAX - digit) / 10)
			return (-1);
		nbr = nbr * 10 + digit;
		s++;
	}
	if (*s)
		return (-1);
	return (nbr);
}

bool	ft_converter(char **argv, t_config *config)
{
	config->num_coders = ft_atol(argv[1]);
	config->time_to_burnout = ft_atol(argv[2]);
	config->time_to_compile = ft_atol(argv[3]);
	config->time_to_debug = ft_atol(argv[4]);
	config->time_to_refactor = ft_atol(argv[5]);
	config->num_compiles_req = ft_atol(argv[6]);
	config->dongle_cooldown = ft_atol(argv[7]);
	config->scheduler = argv[8];
	return (true);
}
