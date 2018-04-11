#include <stdio.h>

void my_strcat(char *s, char *d);

int main(int argc, const char *argv[]) {
    // 注意这里必须是字符数组，而不能是这样的形式：char *s = "abcd"
    // 因为直接使用指针的字符串常量是只读的，对其进行修改会导致段错误
    char s[5] = "abcd";
    char d[9] = "efgh";
    my_strcat(s, d);
    printf("%s\n", d);

    return 0;
}

void my_strcat(char *s, char *d) {
    if (*d) {
        // 如果目的字符串非空
        // 首先将目的字符串的指针置于末尾'\0'处
        while (*d) {
            // d++;
        }
    }
    while (*s) {
        *d = *s;
        s++;
        d++;
    }
    *d = '\0';
}