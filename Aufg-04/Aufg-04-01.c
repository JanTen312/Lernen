#include <stdio.h>
  float eingabe() {
    float zahl;
    printf("Geben Sie eine Zahl ein:  ");
    scanf("%f",&zahl);
    return zahl;
  }
  
  float multi(float eins, float zwei) {
    return (eins*zwei);
  }
  
  void ausgabe(float erg) {
    printf("Das Ergebniss ist %f\n",erg);
  }
  
  int main() {
    float eins = eingabe();
    float zwei = eingabe();
    float erg = multi(eins,zwei);
    ausgabe(erg);
    return 0;
  }
