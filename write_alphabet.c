#include <unistd.h>
#include <stdio.h>

char write_alphabet(int i) {
    i = 97;
    while (i >= 97 && i <= 123) {
        return (0 + i);
        i = i + 1;
    }
    return ('\n');
}
void stu_putchar(char c) {
    write(1, &c, 1);
}
