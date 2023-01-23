#include <stdio.h>
  int main() {
    float geld;
    int getraenk;
    printf("\n\nWaehlen Sie ihr Getränk aus:\n");
    printf("1) Wasser (0,50 Euro)");
    printf("2) Limo (1 Euro)");
    printf("3) Bier (2 Euro)");
    printf("Geben Sie zur Auswahl 1, 2 oder 3 ein:  ");
    scanf("%d",&getraenk);
    switch(getraenk) {
      case 1: printf("Bitte werfen Sie 0.50 Euro ein: ");
              scanf("%f",&geld);
              if(geld == 0.5) {
                printf("Hier ist Ihr Wasser\n"); }
              else {
                printf("Falsche Geldeingabe\n"); }
      break;
      case 2: printf("Bitte werfen Sie 1.00 Euro ein: ");
              scanf("%f",&geld);
              if(geld == 1) {
                printf("Hier ist Ihre Limo\n"); }
              else {
                printf("Falsche Geldeingabe\n"); }
      break;
      case 2: printf("Bitte werfen Sie 2.00 Euro ein: ");
              scanf("%f",&geld);
              if(geld == 2) {
                printf("Hier ist Ihr Bier\n"); }
              else {
                printf("Falsche Geldeingabe\n"); }
      break;
      default: printf("Falsche Eingabe\n")
      break; }
   return 0;
   }
