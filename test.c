//
// Created by Double on 2019-11-15.
//

#include <stdio.h>
#include <stdlib.h>

#include "mm.h"
#include "memlib.h"

typedef struct {
    int x;
    int y;
} point;

int main()
{
    mem_init();
    mm_init();

    point *p1 = mm_malloc(sizeof(point));
    point *p2 = mm_malloc(sizeof(point));
    point *p3 = mm_malloc(sizeof(point));
    printf("%p\n", p2);
    mm_free(p2);
    p2 = NULL;
    printf("%p\n", p2);
    p2 = mm_malloc(sizeof(point));
    printf("%p\n", p2);
    return 0;
}