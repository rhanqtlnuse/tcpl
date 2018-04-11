#include <stdio.h>
#include </home/hanqi/mysrc/c/tcpl/chap5/naive_malloc.h>

int main(int argc, const char *argv[]) {
    char *p = alloc(4095);
    char *q = alloc(2);
    printf("p = %#x\n", (unsigned *) p);
    printf("q = %#x\n", (unsigned *) q);

    return 0;
}