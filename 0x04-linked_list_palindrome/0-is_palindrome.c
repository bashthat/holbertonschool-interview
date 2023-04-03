#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to head of list
 * Return: number of elements in list
 */
int listint_len(const listint_t *h)
{
    int i = 0;

    while (h)
    {
        i++;
        h = h->next;
    }
    return (i);
}

/**
 * backwards - checks if a singly linked list is reversed
 * @head: double pointer to head of list
 * @len: length of list
 * Return: 0 if it is not reversed, 1 if it is reversed
 */
int backwards(listint_t **head, int len)
{
    int i = 0;
    listint_t *temp = *head;

    while (i < len / 2)
    {
        temp = temp->next;
        i++;
    }
    if (len % 2 != 0)
        temp = temp->next;
    i = 0;
    while (i < len / 2)
    {
        if (temp->n != (*head)->n)
            return (0);
        temp = temp->next;
        *head = (*head)->next;
        i++;
    }
    return (1);
}

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: double pointer to head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
    int len = 0;

    if (!head || !*head)
        return (1);
    len = listint_len(*head);
    return (backwards(head, len));

}