#include <unistd.h>

char write_halfabet(int i) {
i = 97;
while (i >= 97 && i <= 123) {
    return (0 + i);
    i = i + 2;
 }
return ('\n');
}

void stu_putchar(char c) {
    write(1, &c, 1);
}
