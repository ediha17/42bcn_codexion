/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:19:06 by ehorvat           #+#    #+#             */
/*   Updated: 2026/09/24 20:38:07 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/parsing.h"

bool	ft_parsing_data(int argc, char **argv, t_config *conf)
{
	if (argc == 9 && ft_validation_args(argv))
		return (ft_converter(argv, conf), true);
	return (false);
}
