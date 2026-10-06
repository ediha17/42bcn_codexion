/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   codexion.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:18:37 by ehorvat           #+#    #+#             */
/*   Updated: 2026/10/05 22:34:49 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -- This header file is the main one.
 * It contains the information that the
 * entire program needs to know. -- */

#ifndef CODEXION_H
# define CODEXION_H 

/*+==========================+
  |       EXTERN LIBS        |
  +==========================+*/

# include <pthread.h>
# include <sys/time.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdbool.h>
# include <limits.h>

/*+==========================+
  |          MACROS          |
  +==========================+*/

/*+==========================+
  |        VARIABLES         |
  +==========================+*/

/*+==========================+
  |         STRUCTS          |
  +==========================+*/

typedef struct s_config
{
	long		num_coders;	
	long	time_to_burnout;
	long	time_to_compile;
	long	time_to_debug;
	long	time_to_refactor;
	long	num_compiles_req;
	long	dongle_cooldown;
	char	*scheduler;	//"fifo" o "edf"
}	t_config;

/*+==========================+
  |        FUNCTIONS         |
  +==========================+*/

#endif
