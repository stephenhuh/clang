#include <stdio.h>
#include <string.h>

/* print Fahrenheit-Celsius table
 * for fahr = 0, 20, ...., 300; floating-point version */

/* note that this is now right-aligned and not left-aligned
 * by allowing for space using numbers in front of %*/


int main()
{
   float fahr, celsius;
   int lower, upper, step;

   lower = 0;
   upper = 300;
   step = 20;
   
   fahr = lower;
   
   char heading[100] = "Heading here!\n";

   printf("%s", heading);

   while (fahr <= upper){
      celsius = (5.0/9.0) * (fahr-32.0);
      printf("%3.0f %6.1f\n", fahr, celsius);
      fahr = fahr + step;
   }
}

