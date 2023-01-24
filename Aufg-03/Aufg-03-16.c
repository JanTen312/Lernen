#include <stdio.h>
  int main() {
    int b,c;
    float a;
    b=0;
    printf("\n\nGeben Sie eine Zahl ein: ");
    scanf("%f",&a);
    c=a;
    while(a >= 1) {
      a = a/5;
      b = b+1;
    }
      printf("Die Zahl %d ist %d mal durch 5 Teilbar der Rest ist %.3f\n\n",c,b,a);
  return 0;
  }
