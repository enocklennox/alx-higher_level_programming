#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: pointer to head of list.
 *
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome.
 */
int is_palindrome(listint_t **head)
{
	int i = 0, j = 0;
	int arr[100000];
	listint_t *temp = *head;

	while (temp != NULL)
	{
		arr[i] = temp->n;
		i++;
		temp = temp->next;
	}

		for (j = 0; j < i / 2; j++)
	{
		if (arr[j] != arr[i - j - 1])
		return (0);
	}
	return (1);
}
