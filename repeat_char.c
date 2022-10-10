#include <unistd.h>

void stu_putchar(char c) {
    write(1 ,&c, 1);
}

void stu_repeat_char(char c, int n) {
    int i = 1;
    while (i <= n) {
        stu_putchar(c);
        i = i + 1;
    }
    stu_putchar('\n');
}
