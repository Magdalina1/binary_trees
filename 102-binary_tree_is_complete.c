#include "binary_trees.h"

/**
 * new_node - Function that creates a new_node in a linked_list
 * @node: Type pointer of node to be created
 * Return: the node created
 */

link_t *new_node(binary_tree_t *node)
{
	link_t *new;

	new =  malloc(sizeof(link_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->node = node;
	new->next = NULL;

	return (new);
}

/**
 * free_q - Function that free the nodes at the linked list
 * @head: Node of the linked_list
 */

void free_q(link_t *head)
{
	link_t *temp_node;

	while (head)
	{
		temp_node = head->next;
		free(head);
		head = temp_node;
	}
}

/**
 * _push - Function that pushes a node into the stack
 * @node: Type pointer of node of the tree
 * @head: Type head node of in the stack
 * @tail: Type tail node of in the stack
 */

void _push(binary_tree_t *node, link_t *head, link_t **tail)
{
	link_t *new;

	new = new_node(node);
	if (new == NULL)
	{
		free_q(head);
		exit(1);
	}
	(*tail)->next = new;
	*tail = new;
}

/**
 * _pop - Function that pops a node into the stack
 * @head: Type head node of in the stack
 */

void _pop(link_t **head)
{
	link_t *temp_node;

	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;
}
