/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:54:51 by marsilva          #+#    #+#             */
/*   Updated: 2023/08/24 17:07:56 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <string.h>
# include <pthread.h>
# include <sys/time.h>





typedef struct s_args
{
	int n_philo;
	int time_to_die;
	int time_to_eat;
	int time_to_sleep;
	int n_to_eat;
}			t_args;


typedef struct s_data
{
	struct s_args args;

}			t_data;

//build_struck
int	b_struck_args(t_args *args ,int argc, char **argv);

//Utils
int print_and_return_value(int value, char *string);
int veryfy_pos_int(char *str);
#endif
