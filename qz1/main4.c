#include <stdio.h>

int main()
{
    int x = 1, y = 1;
    for(x = 1 ; y <= 9 ; x++){
        if(x == 10 ){
            printf("\n");
            x = 0;
            y += 1;
        }
        else{
            printf("%d * %d = %d ", x, y, x*y);
        }
        
        //if == 10 : x = 1 y += 1
        //if x*y == 81
    }

    return 0;
}
