/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   e_treads.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:55:53 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/22 18:27:36 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void *routine(void *phi)
{
	t_philo *philo;
	
	philo = (t_philo *)phi;
	if((philo->id_philo) % 2 == 0)
		usleep(2000);
	while(1)
	{
	if(!ft_philo_eat(philo))
		break;
	if(!ft_philo_sleep(philo))
		break;
	if(!ft_philo_thinking(philo))
		break;
	}
		printf("morreu philo n:%i\n", philo->id_philo);
	return(NULL);
}

void *monitoring(void *dat)
{
	t_data *data;
	int i;

	usleep(2000);
	i = 0;
	data = (t_data *)dat;
	while(1)
	{
		if (i >= data->args.n_philo)
			i = 0;
		usleep(1000);
		//usleep(100000);
		pthread_mutex_lock(&data->mtx_eat);
		//usleep(1000);
		if((unsigned long)(data->args.time_to_die) <= (get_time() - data->philo[i].time_eat) )
			printf("o philon:%i morreu\n", i+1);
		 //write(1, "hey\n", 4);
		pthread_mutex_unlock(&data->mtx_eat);
		i++;
	}
	return(NULL);
}

int create_all_treads(t_data *data)
{
	int i;
	
	i = 0;
	while(i < data->args.n_philo)
	{
		pthread_create(&data->philo[i].philo_tread, NULL, &routine, (void *)&data->philo[i]);
		pthread_mutex_lock(&data->mtx_eat);
		data->philo[i].time_eat = get_time();
		pthread_mutex_unlock(&data->mtx_eat);
		i++;
		usleep(200);
	}
	pthread_create(data->monitoring, NULL, &monitoring, (void *)data);
	return(1);
}

int	ft_start_treads(t_data *data)
{
	int i;

	i = 0;
	data->time = get_time();
	if(!create_all_treads(data))
		return(0);
	while (i < data->args.n_philo)
	{
		pthread_join(data->philo[i].philo_tread, NULL);
		i++;
	}
	pthread_join(*data->monitoring, NULL);
	//printf("tempo=%lu\n", data->time);
	return (1);

	
}