/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam_map.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsilva <marsilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 18:16:14 by marsilva          #+#    #+#             */
/*   Updated: 2023/07/12 19:16:34 by marsilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXAM_MAP_H
# define EXAM_MAP_H

# include "get_next_line.h"
# include "libft.h"
# include "so_long.h"

int		exam_map(char *map);
int		xcalculator(char *map);
int		ycalculator(char *map);
int		exam_map_ii(char *map);
char	**convert_map_to_strs(char *map, int y);
int		check_walls(char **map_str, int x, int y);
int		check_all_components(char **map_str, int x, int y);
int		check_valid_path_map(char **map_str, int x, int y);
void	freestrstr(char **strstr);
void	initialize_value_str(int *str, int cout);

#endif
