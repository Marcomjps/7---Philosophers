/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:54:51 by marsilva          #+#    #+#             */
/*   Updated: 2023/09/26 16:23:51 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

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
	int				n_philo;
	int				time_to_die;
	int				time_to_eat;
	int				time_to_sleep;
	int				n_to_eat;
}			t_args;	
typedef struct s_philo
{
	int					id_philo;
	pthread_mutex_t		*fork_one;
	pthread_mutex_t		*fork_two;
	unsigned int		n_meals;
	void				*data;
	pthread_t			philo_tread;
	unsigned long		time_eat;
	int					times;
}						t_philo;
typedef struct s_data
{
	struct s_args		args;
	pthread_mutex_t		*forks_mutex;
	t_philo				*philo;
	pthread_t			*monitoring;
	pthread_mutex_t		mtx_eat;
	pthread_mutex_t		mtx_cd_stop;
	int					cd_stop;
	unsigned long		time;
}						t_data;

/*_____a_____*/
/*___________*/
/*_____b_____*/
int					b_struck_args(t_args *args, int argc, char **argv);
/*___________*/
/*_____c_____*/
int					veryfy_pos_int(char *str);
unsigned long long	ft_atoll(char *str);
int					bigger_than_int_max(char *str);
int					verify_args(t_args *args, int argc, char **argv);
/*___________*/
/*_____d_____*/
int					ft_init_philo(t_data *data);
int					ft_init_mutex(t_data *data);
int					malloc_vars_to_init(t_data *data);
int					ft_init(t_data *data);
/*___________*/
/*_____e_____*/
void				*routine(void *phi);
int					create_all_treads(t_data *data);
int					ft_start_treads(t_data *data);
/*___________*/
/*_____f_____*/
int					t_print_philo_(char *str, t_philo *philo);
int					ft_philo_eat(t_philo *philo);
int					ft_philo_sleep(t_philo *philo);
int					ft_philo_thinking(t_philo *philo);
/*___________*/
/*_____z_____*/
int					print_and_return_value(int value, char *string);
unsigned long		get_time(void);
int					ft_atoi(const char *str);
size_t				ft_strlen(const char *c);
void				ft_putendl_fd(char *str, int fd);
/*___________*/
/*______zii____*/
char				*ft_itoa(int n);
void				time_stopp(int time);
void				reset_counters(int *i, int *eat_count, int time);
/*___________*/
//void				time_stop(int time);
void				free_memory(t_data *data);
#endif
