/*
** EPITECH PROJECT, 2021
** linked_list Edouard BELHOMME
** File description:
** create_linked
*/

#include "list.h"
#include <stdio.h>

list_t *create_node(char *value, int nb)
{
    list_t *head = malloc(sizeof(list_t));
    if (!head) {
        return NULL;
    }
    head->next = NULL;
    head->prev = NULL;
    head->buffer = value;
    head->lign = nb;
    return head;
}
