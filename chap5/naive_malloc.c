#include </home/hanqi/mysrc/c/tcpl/chap5/naive_malloc.h>

#define ALLOCSIZE 4096

static char allocbuf[ALLOCSIZE];
static char *allocp = allocbuf;

char * alloc(int n) {
    if (allocbuf + ALLOCSIZE - allocp >= n) {
        allocp += n;
        return allocp - n;
    } else {
        return 0;
    }
}

void afree(char *p) {
    if (allocbuf <= p && p < allocbuf + ALLOCSIZE) {
        allocp = p;
    }
}
