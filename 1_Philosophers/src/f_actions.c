/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:25:52 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/22 17:07:43 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"


void time_stop(int time)
{
	usleep(time * 1000);
}

int t_print_philo_(char *str, t_philo *philo)
{
	//unsigned long time;
	t_data *data;

	data = (void*)philo->data;
	//time = get_time() - data->time;
	//if(get_time()- philo->time_eat >= (unsigned long)data->args.time_to_die)
	//	return(0);
	printf("%lu %i %s\n", get_time() - data->time, philo->id_philo, str);
	return(1);
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
	pthread_mutex_lock(&data->mtx_eat);
	philo->time_eat = get_time();
	pthread_mutex_unlock(&data->mtx_eat);
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
int ft_philo_thinking(t_philo *philo)
{
	t_data *data;

	data = (void*)philo->data;
	t_print_philo_(" is thinking", philo);
		
	return(1);
}