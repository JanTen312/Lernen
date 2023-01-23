#include <stdio.h>
  int main() {
    int a;
    printf("\n\nGeben Sie einen Wert zwischen 1-7 ein:  ");
    scanf("%d",&a);
    switch(a) {
      case 1:
      case 2:
      case 3: printf("Erste Wochenhälfte\n\n");
      break;
      case 4:
      case 5: printf("Zweite Wochenhälfte\n\n");
      break;
      case 6:
      case 7: printf("Wochenende\n\n");
      break;
      default: printf("Falsche Eingabe");
    }
  return 0;
  }
