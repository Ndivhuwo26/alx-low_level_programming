#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s -its a singly linked list
 * @str:it is the  string
 * @len:its the length of the string
 * @next:it will point to the next node
 *
 * Description:A singly linked list node data structure
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif

