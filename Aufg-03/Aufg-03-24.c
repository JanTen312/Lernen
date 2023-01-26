#include <stdio.h>
  void main() {
    float geld,preisw=0.5,preisl=1,preisb=2,preis;
    int getraenk,anzahl,i;
    printf("\n\nWaehlen Sie ihr Getränk aus:\n");
    printf("1) Wasser (%.2f Euro)\n",preisw);
    printf("2) Limo (%.2f Euro)\n",preisl);
    printf("3) Bier (%.2f Euro)\n\n",preisb);
    printf("Geben Sie zur Auswahl 1, 2 oder 3 ein:  ");
    scanf("%d",&getraenk);
    printf("Geben Sie die gewünschte Anzahl ein: ");
    scanf("%d",&anzahl);
    switch(getraenk) {
      case 1: preis= preisw*anzahl;
              printf("\n---Bezahlvorgang---");
              printf("\nDer Automat gibt kein Wechselgeld aus!\nBitte werfen Sie %.2f Euro ein: ",preis);
              scanf("%f",&geld);
              while(geld<preis) {
                preis = preis - geld;
                printf("Es fehlen noch %.2f Euro\n",preis);
                printf("Werfen Sie Geld ein: ");
                scanf("%f",&geld);}
              printf("\n---Getränkeausgabe---\n");
              for(i=1;i<=anzahl;i++) {
                printf("Hier ist Ihr %d Getränk von %d\n",i,anzahl); }
              printf("\n\n");
      break;
      case 2: preis= preisl*anzahl;
              printf("\n---Bezahlvorgang---");
              printf("\nDer Automat gibt kein Wechselgeld aus!\nBitte werfen Sie %.2f Euro ein: ",preis);
              scanf("%f",&geld);
              while(geld<preis) {
                preis = preis - geld;
                printf("Es fehlen noch %.2f Euro\n",preis);
                printf("Werfen Sie Geld ein: ");
                scanf("%f",&geld);}
              printf("\n---Getränkeausgabe---\n");
              for(i=1;i<=anzahl;i++) {
                printf("Hier ist Ihr %d Getränk von %d\n",i,anzahl); }
              printf("\n\n");
      break;
      case 3:preis= preisb*anzahl;
              printf("\n---Bezahlvorgang---");
              printf("\nDer Automat gibt kein Wechselgeld aus!\nBitte werfen Sie %.2f Euro ein: ",preis);
              scanf("%f",&geld);
              while(geld<preis) {
                preis = preis - geld;
                printf("Es fehlen noch %.2f Euro\n",preis);
                printf("Werfen Sie Geld ein: ");
                scanf("%f",&geld);}
              printf("\n---Getränkeausgabe---\n");
              for(i=1;i<=anzahl;i++) {
                printf("Hier ist Ihr %d Getränk von %d\n",i,anzahl); }
              printf("\n\n");
      break;
      default: printf("Falsche Eingabe\n");
      break; }
  }
