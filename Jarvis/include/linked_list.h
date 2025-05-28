/*
** EPITECH PROJECT, 2025
** basic_lib
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H
    #define LINKED_LIST_H

typedef struct node_s {
    void *data;
    struct node_s *next;
    struct node_s *prev;
} node_t;

typedef struct linked_list_s {
    node_t *head;
    node_t *tail;
} linked_list_t;

linked_list_t *init_list(void);
void add_list(linked_list_t *linked_list, void *data);
void delete_node(linked_list_t *linked_list, void *data);
void free_node(node_t *head);
void print_list(linked_list_t *linked_list);
node_t *find_node(linked_list_t *linked_list, void *data);
node_t *create_node_var(void *data);

#endif /* LINKED_LIST_H */
