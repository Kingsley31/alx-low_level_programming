#ifndef LIST_H
#define LIST_H

/**
 * struct list_t - a linked list datastructure
 * @str: string datatype
 * @len: length of the string str
 * @next: pointer to the next list_t structure
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

#endif
