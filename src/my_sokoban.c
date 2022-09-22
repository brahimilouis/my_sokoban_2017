/*
** EPITECH PROJECT, 2017
** my_sokoban
** File description:
** ....
*/

#include "my.h"

void my_sokoban(char *str, st_sokoban *st)
{
	recup_map(str, st);
	initscr();
	noecho();
	curs_set(0);
	while (st->touche != ' ' && st->nb_win != st->win && st->win != -1) {
		for (int i = 0; i < st->col + 1; i++)
			mvprintw(i, 0, st->map[i]);
		refresh();
		st->touche = getch();
		if (st->touche <= 68 && st->touche >= 65)
			prepare_deplacement(st);
		if (st->touche == ' ' || st->nb_win == st->win || st->win == -1)
			endwin();
	}
	endwin();
	if (st->touche == ' ')
		st->reset_map = 1;
	else
		st->reset_map = 0;
}
