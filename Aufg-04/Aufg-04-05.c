#include <stdio.h>
  int fibu(int n) {
    if(n==0) {
      return 0;
    }
    else if(n==1) {
      return 1;
    }
    else {
      return n=(n-1)+(n-2);
    }
    
    int main() {
      int f;
      printf("Geben Sie n ein: ");
      scanf("%d",&f);
      printf("Der die Fibunazi zahl ist: %d",fibu(n));
    }
