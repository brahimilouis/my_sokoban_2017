/*
** EPITECH PROJECT, 2017
** my_str_to_show_array
** File description:
** ...
*/

#include "my.h"

int counter_tab(char const *str)
{
	int i = 0;
	int counter = 0;

	while (str[i] != '\0') {
		if (str[i] == '\n' && str[i + 1] != '\0') {
			i = verif_space(str, i);
			counter = counter + 1;
		}
		i = i + 1;
	}
	return (counter);
}

int verif_space(char const *str, int i)
{
	while (str[i] == '\n' && str[i] != '\0')
		i = i + 1;
	return (i);
}

char **my_str_to_word_array(char const *str)
{
	int i = 0;
	int k = 0;
	int j = 0;
	char **tab;

	tab = malloc(sizeof(char *) * (counter_tab(str) + 1));
	tab[0] = malloc(sizeof(char) * (next_malloc(str, i)));
	while (str[i] != '\0') {
		tab[j][k] = str[i];
		i++;
		if (str[i] == '\n') {
			i = verif_space(str, i);
			j++;
			k = -1;
			tab[j] = malloc(sizeof(int) * (next_malloc(str, i)));
		}
		k++;
	}
	return (tab);
}

int next_malloc(char const *str, int i)
{
	int k = 0;

	while (str[i] != '\0' && str[i] != '\n') {
		k++;
		i++;
	}
	return (k + 1);
}
