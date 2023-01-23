#include <stdio.h>
  int main() {
    float a,b,c;
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%f",&a);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%f",&b);
    printf("Geben Sie die dritte Zahl ein: ");
    scanf("%f",&c);
    if(a>b && a>c) {
      printf("Die Zahl eins (%.2f) ist am Größten\n\n",a);
    }else if(b>a && b>c)
      printf("Die Zahl zwei (%.2f) ist am Größten\n\n",b);
    else 
      printf("Die Zahl drei (%.2f) ist am Größten\n\n",c);
return 0;
}
