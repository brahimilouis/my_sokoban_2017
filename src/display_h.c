/*
** EPITECH PROJECT, 2017
** display.h
** File description:
** ....
*/

#include "my.h"

void display_h(st_sokoban *st)
{
	my_putstr("USAGE\n\t./my_sokoban map\nDESCRIPTION\n\t ");
	my_putstr("map\tfile representing the warehouse map, containing '#'");
	my_putstr(" for walls,\n\t\t'P' for the player, 'X' for boxes and 'O'");
	my_putstr(" for storages locations.\n");
}
