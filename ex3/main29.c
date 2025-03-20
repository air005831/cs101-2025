#include <stdio.h>

int main()
{
    int* ip = NULL;
    *ip = 2;
    printf("%x\n", *ip);

    return 0;
}
