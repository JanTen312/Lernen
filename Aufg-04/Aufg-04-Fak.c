#include <stdio.h>
  int fakultaet(int n) {
    if(n == 1) return 1;
    else return fakultaet(n-1)*n;
  }

void main() {
  int n;
  printf("Geben Sie N ein:  ");
  scanf("%f";&n);
  printf("Die Fakultät ist: %.2f\n\n",fakultaet(n));
}
