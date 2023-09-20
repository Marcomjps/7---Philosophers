/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_init.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:52:57 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/20 17:21:01 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

int ft_init_philo(t_data *data)
{
	int i;

	i = 0;
	while( i < data->args.n_philo)
	{
		data->philo[i].id_philo = (i + 1);
		data->philo[i].fork_one = &data->forks_mutex[i];
		if(i + 1 < data->args.n_philo)
			data->philo[i].fork_two = &data->forks_mutex[i+1];
		else if(i != 0)
			data->philo[i].fork_two = &data->forks_mutex[0];
		else
			data->philo[i].fork_two = 0;
		data->philo[i].n_meals = 0;
		data->philo[i].data =(struct t_data*) data;
		i++;
	}
	return(1);
}


int ft_init_mutex(t_data *data)
{
  int	i;

  i = 0;

  while( i < data->args.n_philo)
  {
	if(pthread_mutex_init((data->forks_mutex), NULL))
		return(0);
	i++;
  }
  return(1);
}

int malloc_vars_to_init(t_data *data)
{
	data->forks_mutex = malloc(sizeof(pthread_mutex_t) * (data->args.n_philo + 1));
	if(!data->forks_mutex)
		return(0);
	data->philo = malloc(sizeof(t_philo) * (data->args.n_philo + 1));
	if(!data->philo)
	{
		free(data->forks_mutex);
		return(0);
	}
	return(1);
}
	
int	ft_init (t_data *data) 
{
	if(!malloc_vars_to_init(data))
		return(print_and_return_value( 0, "O programa nao conseguiu fazer mallcok?"));
	
	if(!ft_init_mutex(data))
	{
		free(data->forks_mutex);
		free(data->philo);
		return(print_and_return_value( 0, "O programa nao conseguiu fazer init_mutex?"));
	}
	if(!ft_init_philo(data))
	{
		free(data->forks_mutex);
		free(data->philo);
		return(print_and_return_value( 0, "O programa nao conseguiu fazer init_philo?"));
	}
	return (1);
}