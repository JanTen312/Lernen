#include <stdio.h>
  void main() {
    float geld,preisw=0.5,preisl=1,preisb=2;
    int getraenk,anzahl;
    printf("\n\nWaehlen Sie ihr Getränk aus:\n");
    printf("1) Wasser (%d Euro)\n",preisw);
    printf("2) Limo (%d Euro)\n",preisl);
    printf("3) Bier (%d Euro)\n",preisb);
    printf("Geben Sie zur Auswahl 1, 2 oder 3 ein:  ");
    scanf("%d",&getraenk);
    printf("Geben Sie die gewünschte Anzahl ein: ");
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
      case 3: printf("Bitte werfen Sie 2.00 Euro ein: ");
              scanf("%f",&geld);
              if(geld == 2) {
                printf("Hier ist Ihr Bier\n"); }
              else {
                printf("Falsche Geldeingabe\n"); }
      break;
      default: printf("Falsche Eingabe\n");
      break; }
  }
