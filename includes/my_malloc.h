/*
** EPITECH PROJECT, 2023
** Memory_Workshop
** File description:
** malloc
*/

#ifndef MALLOC_H_
    #define MALLOC_H_
    #include <stdbool.h>

    typedef struct my_malloc_s {
        bool free;
        int size;
        struct my_malloc_s *next;
    } my_malloc_t;

#endif /* !MALLOC_H_ */
