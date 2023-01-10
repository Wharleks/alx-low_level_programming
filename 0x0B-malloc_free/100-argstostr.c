#include <stdlib.h>
#include "main.h"

/**
 * argstostr - a function that concatenates
 * all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: a pointer to a new string
 * or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, lenght;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find lenght of vector + '\0' which makes it a 2d array*/
	lenght = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			lenght++;
		lenght++;
	}
	str = malloc((lenght + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k] = av[i][j];
			k++;
	}
	str[k] = '\0';
	k++;
	}
str[k] = '\0';
return (str);
}
