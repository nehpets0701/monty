#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../../../monty.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    stack_t *head;

    head = NULL;
    add_node(&head, 1);
    add_node(&head, 2);
    add_node(&head, 3);
    add_node(&head, 4);
    add_node(&head, 5);
    printf("Starting List\n");
    print_node(head);
    printf("-----------------\n");
    delete_node(&head, 4);
    print_node(head);
    printf("-----------------\n");
    delete_node(&head, 0);
    print_node(head);
    printf("-----------------\n");
    delete_node(&head, 2);
    print_node(head);
    printf("-----------------\n");
    return (0);
}
