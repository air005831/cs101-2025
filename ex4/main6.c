#include <stdio.h>

int factorial(int n){
    if(n == 1) return 1;
    return n * factorial(n - 1);
}

int main()
{
    int n = 3, m = factorial(n);
    printf("factorial %d if %d", n, m);

    return 0;
}
