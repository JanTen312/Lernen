#include <stdio.h>
  int main() {
  float a,b;
    
    printf("\n\nGeben Sie die erste Zahl ein:  ");
    scanf("%f",&a);
    printf("Geben Sie die zweite Zahl ein:  ");
    scanf("%f",&b);
      if(a<b) {
        printf("Die größere Zahl ist: %.2f \n\n",b);
      }else{
        printf("Die größere Zahl ist: %.2f \n\n",a);
      }  
  return 0;
  }      
