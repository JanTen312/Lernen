#include <stdio.h>
  int main() {
    int k,n,kn,a,b;
    float i;
    printf("Geben Sie die höhe des Kredits ein: ");
    scanf("%d",&k);
    printf("Geben Sie die Laufzeit ein: ");
    scanf("%d",&n);
    printf("Geben Sie den Zinssatz ein: ");
    scanf("%f",&i);
    i=i/100;
    printf("Wollen Sie Zins (1) oder Zinseszins (2)? ");
    scanf("%d",&b);
      switch (b) {
        case 1: 
          for (a=1;a<=n;a++) {
          kn=k*i*a+k;
          printf("Ergebniss: %d\n",kn);
          }
        break;
        case 2:
           for (a=1;a<=n;a++) {
           kn=k*(1+i);
           printf("Ergebniss: %d\n",kn);
           k=kn;
           }
        break;
        default:
          printf("Falsche Eingabe");
        break;
      }
  return 0;
  }
