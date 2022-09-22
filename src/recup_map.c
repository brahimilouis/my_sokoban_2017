/*
** EPITECH PROJECT, 2017
** recup_map
** File description:
** recup
*/

#include "my.h"
#include <sys/stat.h>
#include <sys/types.h>

void recup_map(char *str, st_sokoban *st)
{
	st->map = malloc_map(st->map, str, st);
	st->map = array(st->map, str);
	st->original_map = malloc_map(st->original_map, str, st);
	st->original_map = array(st->original_map, str);
	st->ligne = my_strlen(st->map[0]) - 1;
	st->win = 0;
	verif_map(st);
	cordonate_joueur(st);
	init_var(st);
}
