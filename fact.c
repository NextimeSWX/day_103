#include <stdio.h>

void stu_fact(int nb) {
    int i=1;
    int res=0;
    int n=0;

    n = nb;
    while (i < nb) {
        n = n * i;
        i = i + 1;
    }
    res = n;
    printf("%d\n", res);
}
