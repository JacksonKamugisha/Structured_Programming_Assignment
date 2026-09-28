#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 4.23

    printf("CALCULATING THE COMPUND INTEREST WITH INTEGERS\n");
    printf("\n");
   int principal = 100000, multiplier = 105, divisor = 100;

   printf("%4s  %17s\n", "Year", "Amount on deposit");

   for (int year = 1; year <= 10; ++year)
    {

       // calculate new amount for specified year
      principal = (principal * multiplier) / divisor;

      int dollars = principal / 100;
      int cents = principal % 100;

      printf("%4d    %4d.%02d\n", year, dollars, cents);
   }

   return 0;
}
