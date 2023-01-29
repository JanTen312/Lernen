#include <stdio.h> 
#include <string.h> 
  
 int main() {
  int a;
  char* wochentag[8];
  wochentag[1] = "Montag";
  wochentag[2] = "Dienstag";
  wochentag[3] = "Mitwoch";
  wochentag[4] = "Donnerstag";
  wochentag[5] = "Freitag";
  wochentag[6] = "Samstag";
  wochentag[7] = "Sonntag";
  printf("Geben Sie den gewünschten Tag ein (1-7) :");
  scanf("%d",&a);
  printf("Der %d Wochentag ist der %s" , a, wochentag[a]);
 return 0;
}
