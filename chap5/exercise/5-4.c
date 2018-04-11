#include <stdio.h>

size_t my_strlen(const char *s);
int my_strend(char *s, char *t);

int main(int argc, const char *argv[]) {
    char *s1 = "abcde";
    char *t1 = "cde";
    printf("                           common: %d\n", my_strend(s1, t1));

    char *s2 = 0;
    char *t2 = 0;
    printf("                            empty: %d\n", my_strend(s2, t2));

    char *s3 = "abc";
    char *t3 = "abcd";
    printf("               s3 shorter than t3: %d\n", my_strend(s3, t3));

    char *s4 = "abcde";
    char *t4 = "bcd";
    printf("s3 includes s4 but not at the end: %d\n", my_strend(s4, t4));

    return 0;
}

size_t my_strlen(const char *s) {
    size_t len = 0;
    while (*s) {
        len++;
        s++;
    }
    return len;
}
int my_strend(char *s, char *t) {
    if (s == 0 || t == 0) {
        return 0;
    }
    // 首先要满足len(s) >= len(t)
    while (my_strlen(s) >= my_strlen(t)) {
        char *ps = s;
        char *pt = t;
        for (; *ps == *pt && *pt != '\0'; ps++, pt++)
            ;
        if (*ps == '\0' && *pt == '\0') {
            return 1;
        }
        s++;
    }
    return 0;
}