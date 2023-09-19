/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:54:51 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/19 21:24:39 by marsilva         ###   ########.fr       */
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
# include <limits.h>

typedef struct s_args
{
	int	n_philo;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	n_to_eat;
}			t_args;

typedef struct s_data
{
	struct s_args	args;
	pthread_mutex_t *forks_mutex;
	t_philo 		*philo;
}			t_data;

typedef struct s_philo
{
	int id_philo;
	pthread_mutex_t * fork_one;
	pthread_mutex_t * fork_two;
	unsigned int n_meals;
	t_data		*data;
	pthread_t	philo_tread;
}				t_philo;



/*_____a_____*/
/*___________*/
/*_____b_____*/
int	b_struck_args(t_args *args, int argc, char **argv);
/*___________*/
/*_____c_____*/
int	veryfy_pos_int(char *str);
unsigned long long	ft_atoll(char *str);
int bigger_than_int_max(char *str);
int	verify_args(t_args *args, int argc, char **argv);
/*___________*/
/*_____d_____*/
int ft_init_philo(t_data *data);
int ft_init_mutex(t_data *data);
int malloc_vars_to_init(t_data *data);
int	ft_init (t_data *data);
/*___________*/
/*_____z_____*/
int	print_and_return_value(int value, char *string);
/*___________*/
#endif
