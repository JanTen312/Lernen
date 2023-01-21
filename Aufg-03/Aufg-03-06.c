#include <stdio.h>
  int main() {
    int a;
    printf("\n\nGeben Sie ihre Punkte ein: ");
    scanf("%d",&a);
    switch(a) {
      case 10: printf("Sie haben eine sehr gute Klausur\n\n");
        break;
      case 9: printf("Sie haben eine gute Klausur\n\n");
        break;
      case 8: printf("Sie haben eine befriedigende Klausur\n\n");
        break; 
      case 7: printf("Sie haben eine ausreichende Klausur\n\n");
        break;
      case 6: printf("Sie haben eine mangelhafte Klausur\n\n");
        break;
      case 5:
      case 4:
      case 3:
      case 2:
      case 1:
      printf("Sie haben eine ungenügende Klausur\n\n");
        break;
      default: printf("Falsche Eingabe\n\n"); }
  return 0;
  }     
