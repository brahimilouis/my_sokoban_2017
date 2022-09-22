/*
** EPITECH PROJECT, 2017
** malloc_map
** File description:
** .....
*/

#include "my.h"

char **array(char **map, char *str)
{
	FILE *file = fopen(str, "r");
	char *line = NULL;
	size_t n = 0;
	ssize_t read = getline(&line, &n, file);
	int count_line = 0;

	while (read != -1) {
		map[count_line] = line;
		map[count_line][my_strlen(line) - 1] = '\0';
		line = NULL;
		n = 0;
		count_line++;
		read = getline(&line, &n, file);
	}
	return (map);
}
