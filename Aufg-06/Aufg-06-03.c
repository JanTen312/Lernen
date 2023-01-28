#include <stdio.h>
  void main() {
    int Zahlen[19] = {20,1,19,2,18,3,17,4,16,5,15,6,14,7,13,8,12,9,11,10};
    int a;
    a= 20;
    for (int i = 0; i < a; ++i)
     {   
         for (int x = 0; x < a; ++x)
         {
              if(Zahlen[x] > Zahlen[x+1])
              {
                  int temp = Zahlen[x];
                  Zahlen[x] = Zahlen[x+1];
                  Zahlen[x+1] = temp;                
              }   
          }             
     }  
    for(int y=0;y<20;y++) {
      printf("Die %d Zahl ist %d\n",y+1,Zahlen[y]);
    }
  }
