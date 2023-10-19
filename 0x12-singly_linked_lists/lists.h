#ifndef lists_h
#define lists_h

/**
 * struct list_val - linked list
 *
 * @len: Data type
 *
 * @str: Data type
 *
 * @next: Data type
 */

typedef struct list_val
{
	char *str;
	unsigned int len;
	struct list_val *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
