/*
** EPITECH PROJECT, 2017
** deplacement.c
** File description:
** ....
*/

#include "my.h"

void deplacement(st_sokoban *st)
{
	int c = st->c;
	int i = st->i;

	st->verif = 0;
	if (st->map[c + st->c_dep][i + st->l_dep] == 'X')
		if (st->map[c + st->c_dep * 2][i + st->l_dep * 2] != '#'
		    && st->map[c + st->c_dep * 2][i + st->l_dep * 2] != 'X')
			deplacement_x(st);
		else
			st->verif = 1;
	if (st->verif == 0) {
		st->map[c + st->c_dep][i + st->l_dep] = 'P';
		if (st->original_map[c][i] == 'O')
			st->map[c][i] = 'O';
		else
			st->map[c][i] = ' ';
		st->c += st->c_dep;
		st->i += st->l_dep;
	}
	if (st->joueur == st->nb_joueur && st->error_joueur == 1)
		st->win = -1;
}

void deplacement_x(st_sokoban *st)
{
	int c = st->c + st->c_dep * 2;
	int i = st->i + st->l_dep * 2;
	int j = st->c + st->c_dep;
	int g = st->i + st->l_dep;

	if (st->map[c][i] == 'O') {
		st->win++;
	}
	if (st->original_map[j][g] == 'O') {
		st->map[j][g] = 'O';
		st->win--;
	}
	if (st->map[c + st->c_dep][i + st->l_dep] == '#')
		verif_coin(st, c, i);
	st->map[c][i] = 'X';
}

void verif_coin(st_sokoban *st, int c, int i)
{
	int j = i;
	int verif = 0;

	if (st->map[c][j + 1] == '#' && st->map[c + 1][j] == '#')
		verif = 1;
	if (st->map[c + 1][j] == '#' && st->map[c][j - 1] == '#')
		verif = 1;
	if (st->map[c][j - 1] == '#' && st->map[c - 1][j] == '#')
		verif = 1;
	if (st->map[c - 1][j] == '#' && st->map[c][j + 1] == '#')
		verif = 1;
	if (verif == 1) {
		st->joueur++;
		st->error_joueur = 1;
	}
}
