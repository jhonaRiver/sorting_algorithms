#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define INCREMENT 1
#define DECREMENT -1

/**
 * struct listint_s - Doubly linked list node
 * @n: integer
 * @prev: pointer to previous element
 * @next: pointer to next element
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *, size_t);
void print_list(const listint_t *);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void quick_sort_rec(int *array, int lower, int higher, size_t size);
int lomuto_partition(int *array, int lower, int higher, size_t size);

#endif
