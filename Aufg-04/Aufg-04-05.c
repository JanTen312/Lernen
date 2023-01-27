#include <stdio.h>
  int fibu(int n) {
    if(n==0) {
      return 0;
    }
    else if(n==1) {
      return 1;
    }
    else {
    n=(n-1)+(n-2);
      return fibu(n);
    }
  }
    
    void main() {
      int f;
      printf("\n\nGeben Sie n ein: ");
      scanf("%d",&f);
      printf("Der die Fibunazi zahl ist: %d\n\n",fibu(f));
      }
