/*
** EPITECH PROJECT, 2021
** linked_list Edouard BELHOMME
** File description:
** list
*/

#include <stdlib.h>

#ifndef LIST_H_
#define LIST_H_

#define SUCESS 0
#define ERROR 84

typedef struct list_s {
    char *buffer;
    int lign;
    struct list_s *next;
    struct list_s *prev;
} list_t;

list_t *create_node(char *value, int nbe);  // Create the linked list, just call one time
int add_back(list_t **list, char *value, int nb); // Add a node at the end of the list
int add_front(list_t **list, char *value, int nb); // Add a node at the beggining 
int pop_front(list_t **list); // Delete a node at the front of the list
int pop_back(list_t **list); // Delete a node at the back of the list
int free_linked(list_t **list); // Free all list don't free the head again !

#endif /* !LIST_H_ */
