#include <stdio.h>
int main()
{
    int count = 99, someVal = 1;
    int *pCount = count;
    count = *pCount + 1;

    printf("count = %d\n", count);
    printf("pCount = %d\n", pCount);
    printf("*pCount = %d\n", *pCount);
    printf("&pCount = %d\n", &pCount);

}


