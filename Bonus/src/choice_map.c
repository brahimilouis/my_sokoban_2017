/*
** EPITECH PROJECT, 2017
** choice_map
** File description:
** ......
*/

#include "my.h"

void choice_map(st_sokoban *st)
{
	if (st->map_win == 0)
		my_sokoban("map1", st);
	else if (st->map_win == 1)
		my_sokoban("map2", st);
	else
		my_sokoban("map3", st);
}
