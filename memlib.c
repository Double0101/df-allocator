#include "memlib.h"

/* init heap
 * set top and bottom */
void mem_init(void)
{
    mem_heap = (char*) malloc(MAX_HEAP);
    mem_brk = (char*) mem_heap;
    mem_max_addr = (char*)(mem_heap + MAX_HEAP);
}

/* resize available heap size */
void *mem_sbrk(int incr)
{
    char *old_brk = mem_brk;

    if ((incr < 0) || ((mem_brk + incr) > mem_max_addr)) {
        errno = ENOMEM;
        fprintf(stderr, "ERROR: mem_sbrk failed. Ran out of memory...\n");
        return (void*) -1;
    }
    mem_brk += incr;
    return (void*) old_brk;
}
