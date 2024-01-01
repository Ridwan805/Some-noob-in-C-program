#include <stdio.h>
#include <math.h>

int main() {
   
   double rad;
   double pi = 3.1416;

   printf("Enter the radius:");
   scanf("%lf", &rad);

   double area = pi*pow(rad, 2);

   double cir = 2*pi*rad;



   printf("The area is %lf \n", area);

   printf("The circumfurance is %lf", cir);

   return 0;

}