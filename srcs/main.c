/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:40:27 by ehorvat           #+#    #+#             */
/*   Updated: 2026/10/05 22:23:24 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/codexion.h"
#include "../incs/parsing.h"

int	main(int argc, char *argv[])
{
	t_config	config;

	memset(&config, 0, sizeof(t_config));
	if (ft_parsing_data(argc, argv, &config))

		printf("si\n");
	else
	{
		printf("Error\n");
		return (1);
	}
		//	ft_init(config);
	//ft_start_simulation();
	return (0);
}
