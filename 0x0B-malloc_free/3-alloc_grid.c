#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -a program that is  nested loop to make grid
 * @width:the  width of input
 * @height:the  height of input
 * Return:a  pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **bee;
	int c, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	bee = malloc(sizeof(int *) * height);

	if (bee == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		bee[c] = malloc(sizeof(int) * width);

		if (bee[c] == NULL)
		{
			for (; c >= 0; c--)
				free(bee[c]);

			free(bee);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
			bee[c][d] = 0;
	}

	return (bee);
}
