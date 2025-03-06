#include <stdio.h>
#include <stdlib.h>

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3};
    char charArr[] = "hello";

    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    int charSize = sizeof(charArr);

    FILE *fp = fopen("a.bin", "wb");
    
    fwrite(intArr, sizeof(int), intSize, fp);
    fwrite(doubleArr, sizeof(double), doubleSize, fp);
    fwrite(charArr, sizeof(char), charSize, fp);
    
    fclose(fp);



    fp = fopen("a.bin", "rb");

    int intRead[5];
    double doubleRead[3];
    char charRead[6];

    fread(intRead, sizeof(int), intSize, fp);
    fread(doubleRead, sizeof(double), doubleSize, fp);
    fread(charRead, sizeof(char), charSize, fp);

    fclose(fp);

    printf("整數陣列: ");
    for (int i = 0; i < intSize; i++) {
        printf("%d ", intRead[i]);
    }
    printf("\n");

    printf("浮點數陣列: ");
    for (int i = 0; i < doubleSize; i++) {
        printf("%.1f ", doubleRead[i]);
    }
    printf("\n");

    printf("字元陣列: %s\n", charRead);

    return 0;
}
