#include <stdio.h>
 vergleich() {
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
 vergleich(a,b);
 return 0;
}
