#include "sort.h"

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	int i;

	i = 0;
	while (list)
	{
		if (i > 0)
			printf(", ");
		printf("%d", list->n);
		++i;
		list = list->next;
	}
	printf("\n");
}

void print_list_rev(const listint_t *list)
{
	int i;
	const listint_t *temp = list;

	while (temp->next)
		temp = temp->next;

	i = 0;
	while (temp)
	{
		if (i > 0)
			printf(", ");
		printf("%d", temp->n);
		++i;
		temp = temp->prev;
	}
	printf("\n");
}
