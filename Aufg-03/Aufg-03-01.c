#include <stdio.h>
  int main() {
	float geld;
	printf("\n\nWilkommen beim Getränke Automaten\nWerfen Sie einen Euro ein!\n");
	scanf("%f",&geld);
	if(geld == 1) {
	  printf("Bedankt! Bitte entnehmen Sie ihr Getränk\n\n");
	  }else{
	  printf("Das war kein Euro!\n\n");
	  }	
  return 0;
  }
