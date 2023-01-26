#include <stdio.h>
  float einlesen() {
    float r;
    printf("Geben Sie den Radius ein:  ");
    scanf("%f",&r);
    return r;
  }

  float umfang(float pi,float r) {
    pi=3.141592;
    return (pi*2*r);
  }

  float flaeche(float pi,float r) {
    pi=3.141592;
    return (pi*r*r);
  }

  int main() {
   float r= einlesen();
    umfang(float pi,float r);
    flaeche(float pi,float r);
    return 0;
  }
