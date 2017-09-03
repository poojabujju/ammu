#include <stdio.h>

int main() {
   int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   int s, loop;
   float avg;

   s = avg = 0;
   
   for(loop = 0; loop < 10; loop++) {
      s = s + a[loop];
   }
   
   avg = (float)s / loop;
   
   printf("Average of a values is %.2f", avg);   
   
   return 0;
}

