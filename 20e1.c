#include <stdio.h>
    /* count lines, tabs, and blanks */
int main(){
    long l = 0, t = 0, b = 0;
    int c;   
    while ( (c = getchar()) !=EOF){
        if (c == '\n')
            ++l;
        else if (c == '\t')
            ++t;
        else if (c == ' ')
            ++b;
    }
    printf("lines %ld\n",l);
    printf("tabs  %ld\n",t);
    printf("blanks %ld\n",b);
}

