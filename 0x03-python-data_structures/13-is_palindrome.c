#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
void reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next = NULL;

while (current)
{
next = current->next;    /* Save the next node*/
current->next = prev;    /* Reverse the link*/
prev = current;          /* Move prev forward*/
current = next;          /* Move current forward*/
}

*head = prev;    /* Update head to the new first node*/
}

/**
 * is_palindrome - checks if a linked list is a palindrome
 * @head: double pointer to the linked list
 *
 * Return: 1 if it is, 0 if not
 */
int is_palindrome(listint_t **head)
{
if (*head == NULL || (*head)->next == NULL)
return (1);

listint_t *slow = *head, *fast = *head,
	  *first_half = *head, *second_half = NULL;

    /* Find the midpoint of the list*/
while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
}

    /* For odd length lists, move slow one step forward*/
if (fast)
slow = slow->next;

second_half = slow;
reverse_listint(&second_half);

    /* Compare the first half and the reversed second half*/
while (second_half)
{
if (first_half->n != second_half->n)
return (0);

first_half = first_half->next;
second_half = second_half->next;
}

return (1);
}
