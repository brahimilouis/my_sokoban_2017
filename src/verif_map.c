/*
** EPITECH PROJECT, 2017
** verif_map.c
** File description:
** ....
*/

#include "my.h"

void verif_map(st_sokoban *st)
{
	int verif = 0;

	for (int i = 0; i < st->ligne + 1; i++) {
		if (st->map[0][i] != '#')
			verif = 1;
		if (st->map[st->col][i] != '#')
			verif = 1;
	}
	for (int j = 0; j < st->col; j++) {
		if (st->map[j][0] != '#')
			verif = 1;
		if (st->map[j][st->ligne] != '#')
			verif = 1;
	}
	verif = verif_inside_map(st, verif);
	if (verif == 1) {
		st->win = -1;
		st->error_map = 1;
	}
	else
		st->error_map = 0;
}
