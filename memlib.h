//
// Created by Double on 2019-11-15.
//

#ifndef DF_ALLOCATOR_MEMLIB_H
#define DF_ALLOCATOR_MEMLIB_H

#define MAX_HEAP 2*1024*1024

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

static char *mem_heap;      /* 指向堆的第一个字节 */
static char *mem_brk;       /* 当前堆顶 */
static char *mem_max_addr;      /* 堆的最大地址 */


void mem_init(void);
void *mem_sbrk(int incr);

#endif //DF_ALLOCATOR_MEMLIB_H
