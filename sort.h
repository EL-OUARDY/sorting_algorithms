#ifndef HEADER_GUARD
#define HEADER_GUARD

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/**
 * enum bool - enumeration of boolean values
 * @false: represented as 0
 * @true: represented as 1
 */
typedef enum bool
{
	false = 0,
	true = 1
} bool;

/* function declarations */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);

#endif
