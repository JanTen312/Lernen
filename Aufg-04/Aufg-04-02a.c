#include <stdio.h>
  float einlesen() {
    float r;
    printf("Geben Sie den Radius ein:  ");
    scanf("%f",&r);
    return r;
  }

  float umfang(float pi,float r) {
    return (pi*2*r);
  }

  float flaeche(float pi,float r) {
    return (pi*r*r);
  }
 
  int main() {
    float r= einlesen();
    float pi = 3.141592;
    float umfangerg = umfang(pi,r);
    float flaecheerg = flaeche(pi, r);
    printf("Der Umfang liegt bei: %.2f Zentimetern\nDie Fläche liegt bei %.2f Quadratzentimetern\n",umfangerg,flaecheerg);
    return 0;
  }
