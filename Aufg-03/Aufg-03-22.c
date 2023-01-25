#include <stdio.h>
  void main() {
    int n,a,b;
    b=1;
    printf("\n\nGeben Sie n ein:  ");
    scanf("%d",&n);
    for(a=1;a<=n;a++) {
      b=b*a;
    }
    printf("Die Fakultät von %d ist %d\n\n",n,b);
  }
