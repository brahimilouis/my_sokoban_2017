/*
** EPITECH PROJECT, 2017
** malloc_map
** File description:
** .....
*/

#include "my.h"

char **malloc_map(char **map, char *str, st_sokoban *st)
{
	FILE *file = fopen(str, "r");
	char *line = NULL;
	size_t n = 0;
	ssize_t read = 0;
	int count_line = 0;

	read = getline(&line, &n, file);
	while (read != -1) {
		count_line++;
		read = getline(&line, &n, file);
	}
	st->col = count_line - 1;
	map = malloc(sizeof(char *) * (count_line));
	return (map);
}
