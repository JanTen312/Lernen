#include <stdio.h>
  int main() {
	int a,b,c,d;
	printf("Geben Sie die Sekunden ein:  ");
	scanf("%d",&a);
	b= a/60/60/24;
	a = a-b*60*60*24;
	c = a/60/60;
	a = a-c*60*60;
	d = a / 60;
	a = a- d*60;
	printf("Das sind %d Tage, %d Stunden, %d Minuten und %d Sekunden.\n\n\n",b,c,d,a);
  return 0;
  }
