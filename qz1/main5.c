#include <stdio.h>

int main()
{
    int i = 15;
    int count = 0;
    while (i){
        if (i & 1){
            count ++;
        }
        i >>= 1;
    }
    printf("%d", count);
    return 0;
}
