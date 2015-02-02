#include <stdio.h>
int main()
{
    int n = 20;
    int *pn = n;

    printf("n is %d", n);
    printf("p is %d", *pn);

    char str1[6] = {'h','e','l','l','o','\0'};
    char *str2 = str1;
    char *str3 = &str1;
    char *str4 = &str1[1];
    printf("char str1[6] = {'h','e','l','l','o','\0'} -> %c", str1);
    printf("char *str2 = str1 -> %c *str2", *str2);
    printf("char *str2 = str1 -> %c str2", str2);
    printf("char *str3 = &str1 -> %c str3", str3);
    printf("char *str4 = &str1[1] -> %c str4", str4);

}
