#include <stdio.h>
  int ggt(int Zahl1, int Zahl2){
    if(Zahl1 > Zahl2) {
      b=b-a;
      return ggt(Zahl1,Zahl2);
    }
    else if(Zahl1<Zahl2){
      a=a-b;
      return ggt(Zahl1,Zahl2);
    }
    return a;
  }
        
  void main() {
    int a,b;
    printf("\n\nGeben Sie a ein: ");
    scanf("%d",&a);
    printf("\n\nGeben Sie b ein: ");
    scanf("%d",&b);
    printf("Der GGT ist: %d\n\n",ggt(a,b);
  }
