#include <stdio.h>
#include <string.h>
  int main () {
    int a;
    double netto, brutto;
    char* Produktname[5] = {"Nutella", "Mehl", "Chips", "Marmelade", "Nudeln"};
    int Groese_in_Gramm[5] = {450, 1000, 185, 250, 500};
    double Preis_in_Euro[5] = {2.99, 1.59, 1.99, 1.69, 1.89};
      printf("Geben Sie ihre Produktnummer ein: ");
      scanf("%d",&a);
      if (a <= 5) {
        printf("Ihr gewähltes Produkt ist: %s \n",Produktname[a-1]);
        printf("Ihr gewähltes Produkt kommt in der Größe von %d Gramm \n",Groese_in_Gramm[a-1]);
        printf("Ihr gewähltes Produkt kostet %.2f Euro \n",Preis_in_Euro[a-1]);
        brutto = Preis_in_Euro[a-1]/Groese_in_Gramm[a-1]*1000;
        printf("Der Kilobruttopreis liegt bei %.2f Euro \n", brutto);
        netto = brutto/107*100;
        printf("Der Kilonettopreis liegt bei %.2f Euro \n", netto);
      }
      else{
        printf("Falsche Eingabe \n");
      }
  return 0;
  }  
        
