/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehorvat <ehorvat@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 19:13:53 by ehorvat           #+#    #+#             */
/*   Updated: 2026/09/24 20:33:50 by ehorvat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* -- This is the header used for data validation and parsing.
 * It contains only the information necessary for that task. -- */

#ifndef PARSING_H
# define PARSING_H

/*+==========================+
  |			  LIBS  		 |
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

/*+==========================+
  |        FUNCTIONS         |
  +==========================+*/

bool	ft_parsing_data(int argc, char **argv, t_config *conf);
void	ft_converter(char **argv, t_config *config);
bool	ft_validation_args(char **argv);
bool	ft_is_numeric_str(char *str);
long	ft_atol(char *s);

#endif
