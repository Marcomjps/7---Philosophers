/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_actions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 17:25:52 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/26 16:52:18 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int	t_print_philo_(char *str, t_philo *philo)
{
	t_data	*data;

	data = (void *) philo->data;
	pthread_mutex_lock(&data->mtx_cd_stop);
	if (data->cd_stop == 1)
	{
		pthread_mutex_unlock(&data->mtx_cd_stop);
		return (0);
	}
	printf("%lu %i %s\n", get_time() - data->time, philo->id_philo, str);
	pthread_mutex_unlock(&data->mtx_cd_stop);
	return (1);
}

int	ft_philo_eat_ii(t_philo *philo, t_data *data)
{
	pthread_mutex_lock(philo->fork_two);
	if (!t_print_philo_("has taken a fork", philo) || 
		!t_print_philo_("is eating", philo))
	{
		pthread_mutex_unlock(philo->fork_one);
		pthread_mutex_unlock(philo->fork_two);
		return (0);
	}
	pthread_mutex_lock(&data->mtx_eat);
	philo->time_eat = get_time();
	pthread_mutex_unlock(&data->mtx_eat);
	time_stopp(data->args.time_to_eat);
	pthread_mutex_lock(&data->mtx_eat);
	philo->times++;
	pthread_mutex_unlock(&data->mtx_eat);
	pthread_mutex_unlock(philo->fork_one);
	pthread_mutex_unlock(philo->fork_two);
	return (1);
}

int	ft_philo_eat(t_philo *philo)
{
	t_data	*data;

	data = (void *)philo->data;
	pthread_mutex_lock(philo->fork_one);
	if (data->args.n_philo == 1)
	{
		t_print_philo_("has taken a fork", philo);
		time_stopp(data->args.time_to_die);
		pthread_mutex_unlock(philo->fork_one);
		return (0);
	}
	if (!t_print_philo_("has taken a fork", philo))
	{
		pthread_mutex_unlock(philo->fork_one);
		return (0);
	}
	return (ft_philo_eat_ii(philo, data));
}

int	ft_philo_sleep(t_philo *philo)
{
	t_data	*data;

	data = (void *)philo->data;
	usleep(300);
	if (!t_print_philo_("is sleeping", philo))
		return (0);
	time_stopp(data->args.time_to_sleep);
	return (1);
}

int	ft_philo_thinking(t_philo *philo)
{
	t_data	*data;

	data = (void *)philo->data;
	if (!t_print_philo_(" is thinking", philo))
		return (0);
	return (1);
}
