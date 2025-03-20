#include <stdio.h>

void swap_num(int* i, int* j){
    printf("in func before swap i = %d, j = %d\n", *i, *j);
    int t;
    t = *i;
    *i = *j;
    *j = t;
    printf("in func after swap i = %d, j = %d\n", *i, *j);
}

int main()
{
    int n = 1, m = 2;
    swap_num(&n, &m);
    printf("in main n = %d, m = %d\n", n, m);
    return 0;
}
