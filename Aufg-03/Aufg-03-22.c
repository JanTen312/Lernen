#include <stdio.h>
  void main() {
    int n,a,b;
    b=1
    printf("Geben Sie n ein:  ");
    scanf("%d",&n);
    for(a=0;a<n;a++) {
      b=b+a;
    }
    printf("Die Fakultät von %d ist %d\n\n",n,b);
  }
