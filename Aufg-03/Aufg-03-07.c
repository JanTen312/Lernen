#include <stdio.h>
  int main() {
    float a,b,c;
    printf("\n\nGeben Sie Zahl eins ein: ");
    scanf("%f",&a);
    printf("Geben Sie Zahl zwei ein: ");
    scanf("%f",&b);
    printf("Geben Sie Zahl drei ein: ");
    scanf("%f",&c);
    if(a<b && a<c) {
      printf("Der Wert eins (%.2f) ist der Kleinste\n\n",a);}
    else if(b<a && b<c) printf("Der Wert zwei (%.2f) ist der Kleinste\n\n",b);
    else printf("Der Wert drei (%.2f) ist der Kleinste\n\n",c);
  return 0;
  }
