/*
** EPITECH PROJECT, 2017
** prepare_deplacement
** File description:
** ......
*/

#include "my.h"

void prepare_deplacement(st_sokoban *st)
{
	if (st->touche == 68 && st->map[st->c][st->i - 1] != '#') {
		st->l_dep--;
		deplacement(st);
	} else if (st->touche == 67 && st->map[st->c][st->i + 1] != '#') {
		st->l_dep++;
		deplacement(st);
	}
	if (st->touche == 66 && st->map[st->c + 1][st->i] != '#') {
		st->c_dep++;
		deplacement(st);
	} if (st->touche == 65 && st->map[st->c - 1][st->i] != '#') {
		st->c_dep--;
		deplacement(st);
	}
	st->c_dep = 0;
	st->l_dep = 0;
}
