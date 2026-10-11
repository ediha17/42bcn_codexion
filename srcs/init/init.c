/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/10 17:11:55 by ehorvat           #+#    #+#             */
/*   Updated: 2026/10/10 17:15:40 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../incs/simulation.h"

bool	ft_global_init(t_orchestrator *orche, t_config *conf)
{
	if(orche == NULL || conf == NULL)
		return (false);
	if(!ft_init_orchestrator(&orche, conf))
		return (false);
	if(!ft_init_coders(&orche->coders, conf->num_coders))
	{
		pthread_mutex_destroy(&orche->print_mutex);
		pthread_mutex_destroy(&orche->sim_status_mutex);
		return (false);
	}
	if(!ft_init_dongles(&orche->coders, conf->num_coders))
	{
		//falta fer free dels coders
		pthread_mutex_destroy(&orche->print_mutex);
		pthread_mutex_destroy(&orche->sim_status_mutex);
		return (false);
	}
	return (true);
}
