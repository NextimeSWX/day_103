#include <stdio.h>
void get_digit(int nb, int index) {
    int i = 0;

    while (i < index) {
        nb = nb / 10;
        i = i + 1;
    }
    nb = nb % 10;
    printf("%d\n", nb);
}
