#include <stdio.h>
  int ggt(int Zahl1, int Zahl2){
    if(Zahl1 > Zahl2) {
      Zahl1=Zahl1-Zahl2;
      return ggt(Zahl1,Zahl2);
    }
    else if(Zahl1<Zahl2){
      Zahl2=Zahl2-Zahl1;
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
    printf("Der GGT ist: %d\n\n",ggt(a,b));
  }
