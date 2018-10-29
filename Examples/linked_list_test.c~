/*******************************************************************************
Linked List Test
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Create a node structure type. */
typedef struct _node
{
    int data;
    /* node_t hasn't been defined yet, so have to use struct _node type. */
    struct _node *next;
} node_t;

/* Create a linked list type. */
typedef struct
{
    int count;
    node_t *first;
} linked_list_t;

/* Input is the list to add the node to and the data to store in the node. */
void linked_list_add(linked_list_t *list, int data)
{
    /* Create a new node. */
    node_t *new_node = (node_t *)malloc(sizeof(node_t));
    new_node->data = data;
    new_node->next = NULL;

    /* Check if this is the first node in the list. */
    if (list->first == NULL)
    {
        list->first = new_node;
    }
    else
    {
        /* Create a current node to reference top of list. */
        node_t *current_node = list->first;

        /* Advance along the links to the nodes until get to the end. */
        while (current_node->next != NULL)
        {
            current_node = current_node->next;
        }

        /* Set the last node to point to the new node. */
        current_node->next = new_node;
    }

    /* Increment the count of nodes in the list. */
    list->count++;
}

/* Input is a list, prints the list's contents on the screen. */
void linked_list_print(linked_list_t *list)
{
    node_t *current_node = list->first;

    while (current_node != NULL)
    {
        printf("%d -> ", current_node->data);
        current_node = current_node->next;
    }
    printf("NULL\n");
}

/* Initialize the members of the linked list to defautl values. */
void linked_list_init(linked_list_t *list)
{
    list->count = 0;
    list->first = NULL;
}

int main(int argc, char *argv[])
{
    int i;

    /* Make a linked list variable. */
    linked_list_t list;
    linked_list_init(&list);

    /* Put ten items in the list. */
    for (i = 0; i < 10; i++)
    {
        linked_list_add(&list, i);
    }

    /* Print the list. */
    linked_list_print(&list);

    return 0;
}

