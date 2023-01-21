#include <stdio.h>
  int main() {
    float a,b,c;
    printf("\n\nGeben Sie Zahl eins ein: ");
    scanf("%f",&a);
    printf("Geben Sie Zahl zwei ein: ");
    scanf("%f",&b);
    printf("Geben Sie Zahl drei ein: ");
    scanf("%f",&c);
    if(a>b>c) {
      printf("Der Wert eins (%f) ist der Größte\n\n",a);}
    else if(a>c>b) printf("Der Wert eins (%f) ist der Größte\n\n",a);
    else if(b>c>a) printf("Der Wert zwei (%f) ist der Größte\n\n",b);
    else if(b>a>c) printf("Der Wert zwei (%f) ist der Größte\n\n",b);
    else if(c>b>a) printf("Der Wert drei (%f) ist der Größte\n\n",c);
    else printf("Der Wert drei (%f) ist der Größte\n\n",c);
  return 0;
  }
