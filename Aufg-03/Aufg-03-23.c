#include <stdio.h>
  void main() {
  int n, a,eins= 0,zwei= 1,drei;
  printf("\n\nGeben Sie die Dauer an: ");
  scanf("%d",&n);
  for(a=1;a<=n;a++) {
    drei = eins + zwei;
    printf("Der %d Fibu Wert ist: %d\n",n,drei);
    eins = zwei;
    zwei = drei;
  }
  }
