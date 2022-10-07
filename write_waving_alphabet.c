#include <unistd.h>

void stu_putchar(char c) {
    write(1, &c, 1);
}int main(void)
{
int i = 65;
    int i2 =98;
    while (i >= 65 && i <= 90) {
        stu_putchar(i);
        stu_putchar(i2);
        i = i + 2;
        i2 = i2 + 2;
    }
    stu_putchar('\n');
}
