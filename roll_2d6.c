#include <unistd.h>

void stu_putchar(char c) {
    write(1, &c, 1);
}

int main(void) {
    int i=1;
    int i2=1;
    int nb=1;

    while (nb < 22) {
        while (i2 <= 6) {
            if (i2 < i) {
                i2 = i2 +1;
            }
            else {
            stu_putchar('0' + i);
            stu_putchar('-');
            stu_putchar('0' + i2);
            stu_putchar(' ');
            i2 = i2 + 1;
            nb = nb + 1;
            }
        }
        i = i + 1;
        i2 = 1;
    }
    stu_putchar('\n');
}
