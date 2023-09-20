/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:25:52 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/20 21:18:30 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"


void time_stop(int time)
{
	usleep(time * 1000);
}

void t_print_philo_(char *str, t_philo *philo)
{
	unsigned long time;
	t_data *data;

	data = (void*)philo->data;
	time = get_time() - data->time;
	printf("%lu %i %s\n", time, philo->id_philo, str);
	
}

int ft_philo_eat(t_philo *philo)
{
	t_data *data;

	data = (void*)philo->data;
	pthread_mutex_lock(philo->fork_one);
	t_print_philo_("has taken a fork", philo);
	pthread_mutex_lock(philo->fork_two);
	t_print_philo_("has taken a fork", philo);
	t_print_philo_("is eating", philo);

	time_stop(data->args.time_to_eat);
	pthread_mutex_unlock(philo->fork_one);
	pthread_mutex_unlock(philo->fork_two);
	return(1);
}
int ft_philo_sleep(t_philo *philo)
{
	t_data *data;

	data = (void*)philo->data;
	t_print_philo_("is sleeping", philo);
	time_stop(data->args.time_to_sleep);
	return(1);
}