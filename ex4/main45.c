#include <stdio.h>

int hanio(int n, char from_rod, char to_rod, char aux_rod){
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
        return 0;
    }
    hanio(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d form %c to %c\n", n, from_rod, to_rod);
    hanio(n - 1, aux_rod, to_rod, from_rod);
    
}

int main()
{
    int n = 4;
    hanio(n, 'A', 'B', 'c');
    return 0;
}
