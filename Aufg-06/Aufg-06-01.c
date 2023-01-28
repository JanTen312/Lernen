#include <stdio.h>
  void main() {
  int Note[9];
  for(int i=0;i<10;i++) {
    printf("Geben Sie die %d Note ein: ",i+1);
    scanf("%d",&Note[i]);
  }
  printf("\nGeben Sie die %d Note ein: ",Note[0]);
  printf("\nGeben Sie die %d Note ein: ",Note[1]);
  printf("\nGeben Sie die %d Note ein: ",Note[2]);
  printf("\nGeben Sie die %d Note ein: ",Note[3]);
  printf("\nGeben Sie die %d Note ein: ",Note[4]);
  }
