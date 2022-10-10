#include <stdio.h>

void stu_pow(int nb, int power) {
    int i=2;
    int res=0;
    int n=0;

    n = nb * nb;
    while (i < power) {
        n = n * nb;
        i = i + 1;
    }
    res = n;
    printf("%d\n", res);
}
