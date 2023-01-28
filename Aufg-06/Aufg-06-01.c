#include <stdio.h>
  void main() {
  int i,n;
  float schnitt;
  n=0;
  int Note[9];
  for(int i=0;i<10;i++) {
    printf("Geben Sie die %d Note ein: ",i+1);
    scanf("%d",&Note[i]);
  }
  for(i=0;i<10;i++) {
  n=n+Note[i];
  }
  schnitt= n/10;
  printf("\nDer Notenschnitt ist: %.2f\n\n",schnitt);
  }
