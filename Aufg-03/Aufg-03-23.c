#include <stdio.h>
  void main() {
  int n, a,eins= 0,zwei= 1,drei;
  printf("Geben Sie die Schrittweite an: ")
  scanf("%d",&n);
  for(a=1;a<=n;a++) {
    drei = eins + zwei;
    printf("%d",drei);
    eins = zwei;
    zwei = drei;
  }
  }
