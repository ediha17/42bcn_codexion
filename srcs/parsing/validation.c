/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 14:17:52 by ehorvat           #+#    #+#             */
/*   Updated: 2026/09/25 14:46:39 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/parsing.h"

bool	ft_is_numeric_str(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (false);
		i++;
	}
	return (true);
}

bool	ft_validation_args(char **argv)
{
	long	tmp_nbr;
	int		i;

	i = 1;
	while (i < 8)
	{
		if (!ft_is_numeric_str(argv[i]))
			return (false);
		tmp_nbr = ft_atol(argv[i]);
		if (tmp_nbr < 1 || tmp_nbr > LONG_MAX)
			return (false);
		i++;
	}
	if (strcmp(argv[i], "fifo") != 0 && strcmp(argv[i], "edf") != 0)
		return (false);
	return (true);
}
