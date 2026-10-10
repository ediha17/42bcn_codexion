/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simulation.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 20:31:48 by ehorvat           #+#    #+#             */
/*   Updated: 2026/10/10 17:44:10 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SIMULATION_H
# define SIMULATION_H 

/*+==========================+
  |			  LIBS	         |
  +==========================+*/

# include "./codexion.h"

/*+==========================+
  |          MACROS          |
  +==========================+*/

/*+==========================+
  |        VARIABLES         |
  +==========================+*/

/*+==========================+
  |         STRUCTS          |
  +==========================+*/

typedef struct s_orchestrator	t_orchestrator;
typedef struct s_heap_queue		t_heap_queue;
typedef struct s_heap_node		t_heap_node;
typedef struct s_dongle			t_dongle;
typedef struct s_coder			t_coder;

struct s_coder
{
	int				id;
	pthread_t		thread_id;
	int				left_dongle_id;
	int				right_dongle_id;
	long			last_compile_time;
	int				compiles_count;
	t_orchestrator	*orchestrator;
};

struct s_orchestrator
{
	t_config		config;
	t_coder			*coders;
	t_dongles		*dongles;
	pthread_mutex_t	print_mutex;
	pthread_mutex_t	sim_status_mutex;
	bool			stop_sim;
};

struct s_dongle
{
	int				id;
	bool			is_in_use;
	pthread_mutex_t	mutex;
	pthread_cond_t	cond;
	t_heap_queue	*queue;
};

struct s_heap_queue
{
	t_heap_node			*array;
	int					size;
	int					capacity;
	t_scheduler_type	*scheduler_ref;

};

struct s_heap_node
{
	int		coder_id;
	long	deadline;
	long	arrival_time;
};

/*+==========================+
  |        FUNCTIONS         |
  +==========================+*/

#endif
