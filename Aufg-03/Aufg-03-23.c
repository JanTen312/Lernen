#include <stdio.h>
  void main() {
  int n, a,eins= 0,zwei= 1,drei;
  printf("\n\nGeben Sie die Dauer an: ");
  scanf("%d",&n);
  if(n==0) {
    printf(""\nDer endwert von %d ist: 0\n\n",n);
    } else if(n==1) {
      printf(""\nDer endwert von %d ist: 1\n\n",n);
      }
  for(a=1;a<=n;a++) {
    drei = eins + zwei;
    printf("Der %d Fibu Wert ist: %d\n",a,drei);
    eins = zwei;
    zwei = drei;
  }
  printf("\nDer endwert von %d ist: %d\n\n",n,drei);
  }
