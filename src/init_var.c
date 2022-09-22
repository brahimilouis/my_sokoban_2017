/*
** EPITECH PROJECT, 2017
** init_var
** File description:
** ......
*/

#include "my.h"

void init_var(st_sokoban *st)
{
	nb_win(st);
	st->c_dep = 0;
	st->l_dep = 0;
	st->nb_joueur = st->nb_win;
	st->joueur = 0;
	st->touche = 0;
	st->error_joueur = 0;
}
