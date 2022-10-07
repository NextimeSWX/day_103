#include <unistd.h>
char write_descending_digits(int i) {
    i = 57;
    while (i <= 57 && i >= 48) { 
        return (0 + i);
        i = i - 1;
    }
    return ('\n');
}

void stu_putchar(char c) {
    write(1, &c, 1);
}
