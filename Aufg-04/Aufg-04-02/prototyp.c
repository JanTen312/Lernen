#include <stdio.h>
float vergleich() {
   float a,b;
   printf("\n\nGeben Sie zahl A ein: ");
   scanf("%f",&a);
   printf("\n\nGeben Sie zahl B ein: ");
   scanf("%f",&b);
   if(a<b) {
     return a;
   }else{
     return b;}
 }

int main() {
 vergleich();
 printf("Die größere Zahl ist: %f \n\n",vergleich);
 return 0;
}
