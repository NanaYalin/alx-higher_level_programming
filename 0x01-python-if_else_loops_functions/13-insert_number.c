#include "lists.h"

/**
 * insert_node - Inserts a number into a sorted singly-linked list
 * @head: A pointer the head of the linked list
 * @number: The number to insert
 *
 * Return: NULL in case of failure
 *       a pointer to the new mode
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

