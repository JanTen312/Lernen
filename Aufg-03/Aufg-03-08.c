#include <stdio.h>
  int main() {
    double a,b,c;
    printf("Geben Sie die erste Zahl ein: ");
    scanf("%d",&a);
    printf("Geben Sie die zweite Zahl ein: ");
    scanf("%d",&b);
    printf("Geben Sie die dritte Zahl ein: ");
    scanf("%d",&c);
    if(a>b && a>c) {
      printf("Die Zahl eins (%.2d) ist am Größten",a);
    }else if(b>a && b>c) {
      printf("Die Zahl zwei (%.2d) ist am Größten",b);
    }else 
      printf("Die Zahl drei (%.2d) ist am Größten",c);
  }
return 0;
}
