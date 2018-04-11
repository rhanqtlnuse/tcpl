#include <stdio.h>

int main(int argc, const char *argv[]) {
    int a = 1;
    void *pa = &a;
    int b = 2;
    int *pb = &b;
    pa = pb;
    printf("pa = %#x, pb = %#x\n", (unsigned *) pa, (unsigned *) pb);
    pb = pa;
    
    return 0;
}