/*
** EPITECH PROJECT, 2017
** cordonate_joueur
** File description:
** ......
*/

#include "my.h"

void cordonate_joueur(st_sokoban *st)
{
	int i = 0;
	int j = 0;

	while (i < st->col + 1) {
		if (st->map[i][j] == 'P') {
			st->c = i;
			st->i = j;
		}
		if (j == st->ligne) {
			i++;
			j = 0;
		}
		j++;
	}
}
