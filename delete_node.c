/*
** EPITECH PROJECT, 2021
** linked_list
** File description:
** delete_node
*/

#include "list.h"

int pop_front(list_t **list)
{
    list_t *tmp = NULL;
    
    if (!(*list) || !(*list)->next)
        return ERROR;
    tmp = (*list)->next;
    tmp->prev = NULL;
    if ((*list)->buffer)
        free((*list)->buffer);
    free((*list));
    (*list) = tmp;
    for (; (*list)->next; (*list) = (*list)->next);
    for (; (*list)->prev; (*list) = (*list)->prev);
    return SUCESS;
}

int pop_back(list_t **list)
{
    list_t *tmp = (*list);

    if (!(*list)->next)
        return ERROR;
    for (; (*list)->next; (*list) = (*list)->next);
    tmp = (*list)->prev;
    if ((*list)->buffer)
        free((*list)->buffer);
    free((*list));
    (*list) = tmp;
    (*list)->next = NULL;
    for (; (*list)->prev; (*list) = (*list)->prev);
    return SUCESS;
}

int free_linked(list_t **list)
{
    if (!(*list))
        return ERROR;
    while ((*list)->next) {
        pop_back(list);
        (*list) = (*list)->next;
    }
    if ((*list)->buffer)
        free((*list)->buffer);
    if ((*list)->prev->buffer)
        free((*list)->prev->buffer);
    free((*list)->prev);
    free((*list));
    return SUCESS;
}
