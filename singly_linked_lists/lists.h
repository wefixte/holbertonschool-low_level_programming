#ifndef LIST_HEADER
#define LIST_HEADER

/*Libraries*/
#include <stdio.h>
#include <stdlib.h>

/*Structure*/
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*Prototypes*/
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
