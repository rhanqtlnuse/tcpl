#include <stdio.h>

int main(int argc, const char *argv[]) {
    int a = 1;
    int *pa = &a;
    int b = 2;
    int *pb = &b;
    printf("%#x\n", (unsigned *) (pa + pb));

    return 0;
}