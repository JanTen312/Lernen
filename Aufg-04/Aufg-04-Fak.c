#include <stdio.h>
 int fakultaet(int n) {
    if(n == 1) return 1;
    else return fakultaet(n-1)*n;
  }

void main() {
  int n;
  printf("\n\nGeben Sie N ein:  ");
  scanf("%d",&n);
  printf("Die Fakultät ist: %d\n\n",fakultaet(n));
}
