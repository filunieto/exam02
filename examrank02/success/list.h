#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct s_list
{
	int data;
	struct s_list *next;
}t_list;

#endif