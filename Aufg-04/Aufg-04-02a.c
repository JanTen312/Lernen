#include <stdio.h>
  float einlesen(float r) {
    printf("Geben Sie den Radius ein:  ");
    scanf("%f",&r);
    return r;
  }

  float umfang(float pi) {
    pi=3.141592;
    return (pi*2*r);
  }

  float fläche(int pi) {
    pi=3.141592;
    return (pi*r*r);
  }

  int main() {
    r=einlesen();
    umfang(r);
    fläche(r);
    return 0;
  }
