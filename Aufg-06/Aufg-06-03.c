#include <stdio.h>
  void main() {
    int Zahlen[19] = {1,412,65,3,63,8,6,4,32,46,67,54,22,45,32,487,67,5,43};
    int a;
    a= 20;
    for(int i=0;i<size;i++) {
      for(int x=0;x<size,x++) {
        if(Zahlen[x]>Zahlen[x+1]) {
          int hilfe = Zahlen[x];
          Zahlen[x] = Zahlen[x+1];
          Zahlen[x] = hilfe;
        }}}
    for(int y=0;y<20;y++) {
      printf("Die %d Zahl ist &d\n",i+1,Zahlen[i]);
    }
  }
