#include <stdio.h>
 vergleich() {
   float a,b;
   printf("\n\nGeben Sie zahl A ein: ");
   scanf("%f",&a);
   printf("\n\nGeben Sie zahl A ein: ");
   scanf("%f",&a);
   if(a<b) {
     return a;
   }else{
     return b;}
 }

int main() {
 vergleich();
 return 0;
}
