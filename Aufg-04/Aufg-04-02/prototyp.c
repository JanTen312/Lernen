#include <stdio.h>
float vergleich() {
   float a,b;
   printf("\n\nGeben Sie zahl A ein: ");
   scanf("%f",&a);
   printf("\n\nGeben Sie zahl B ein: ");
   scanf("%f",&b);
   if(a<b) {
     printf("Die größere Zahl ist: %f \n\n",a);
   }else{
     printf("Die größere Zahl ist: %f \n\n",b);}
 }

void main() {
 vergleich();
}
