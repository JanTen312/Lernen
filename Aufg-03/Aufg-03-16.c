#include <stdio.h>
  int main() {
    int a,b,c;
    b=0;
    printf("\n\nGeben Sie eine Zahl ein die durch 5 Teilbar ist: ");
    scanf("%d",a,);
    c=a;
    while(a != 1) {
      a = a/5;
      b = b+1;
      printf("Die Zahl %d ist %d mal durch 5 Teilbar\n\n",c,b);
    }
  return 0;
  }
