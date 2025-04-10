#include <stdio.h>

int p99(int i, int j){
    if(i == 1 && j == 1) {
        printf("%d * %d = %d ", i, j, i*j);
        return 0;
    }
    else if(j == 0){
        j = 9;
        i--;
    }
    p99(i, j - 1);
    printf("%d * %d = %d ", i, j, i*j);
    if(j == 9) printf("\n");
}

int main()
{
    p99(9,9);

    return 0;
}
