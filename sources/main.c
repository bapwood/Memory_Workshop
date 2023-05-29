/*
** EPITECH PROJECT, 2023
** Memory Workshop
** File description:
** memory
*/

#include "my_malloc.h"
#include <stdlib.h>
#include <unistd.h>

void node_malloc(int size)
{
    my_malloc_t allocation;
    allocation.free = false;
    allocation.size = size;
    allocation.next = NULL;
    sbrk(size + sizeof(my_malloc_t));
}

void malloc_linked_list()
{
    printf("jeremy meilleur astek");
}

int main(int argc, char *argv[])
{
    char *str = strdup("Hello Wolrd!");
    return 0;
}
