/*
** EPITECH PROJECT, 2021
** linked_list Edouard BELHOMME
** File description:
** add_node
*/

#include "list.h"

int add_front(list_t **list, char *value, int nb)
{
    list_t *node = malloc(sizeof(list_t));

    if (!node)
        return ERROR;
    node->prev = NULL;
    node->next = (*list);
    node->buffer = value;
    node->lign = nb;
    for (; (*list)->next; (*list) = (*list)->next);
    for (; (*list)->prev; (*list) = (*list)->prev);
    (*list)->prev = node;
    (*list) = (*list)->prev;
}

int add_back(list_t **list, char *value, int nb)
{
    list_t *node = malloc(sizeof(list_t));
    list_t *tmp = (*list);

    if (!node)
        return ERROR;
    for (; tmp->next; tmp = tmp->next);
    node->prev = tmp;
    node->next = NULL;
    node->lign = nb;
    node->buffer = value;
    for (tmp = (*list); tmp->next; tmp = tmp->next);
    tmp->next = node;
    for (; tmp->prev; tmp = tmp->prev);
    (*list) = tmp;
    return SUCESS;
}
