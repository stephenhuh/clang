#include <stdio.h>

/* print Celsius - Farenheit table
 * 9/5 C + 32 = F */

int main()
{
   float fahr, celsius; /* better to declare multiple variables*/
   int lower, upper, step; /* try to abstract as done here, shown that celsius is initalized with lower
                             to make more readable*/
   lower = 0;
   upper = 300;
   step = 20;
   
   celsius = lower;

   while (celsius <= upper){
      fahr = celsius * (9.0/5.0) + 32.0;
      printf("%3.0f   %6.1f\n", celsius, fahr);
      celsius = celsius + step;     
   }

}

