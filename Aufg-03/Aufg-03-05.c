#include <stdio.h>
  int main() { 
    int a;
    printf("\n\nGeben Sie ihr Alter in Jahren ein: ");
    scanf("%d",&a);
    if(a<0) {
      printf("Sie sind noch nicht geboren!\n\n");}
      else if(a <=18) printf("Sie sind Jugendlich!\n\n");
      else if(a <=67) printf("Sie sind Erwachsen!\n\n");
      else printf("Sie sind Rentner!\n\n");
  return 0;
  }  
