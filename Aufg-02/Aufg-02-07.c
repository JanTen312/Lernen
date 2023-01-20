#include <stdio.h> 
  int main() {
  int a,b,c,d;
	printf("Geben Sie eine Anzahl an Tagen ein:  ");
	scanf("%d",&a);
	b = a * 24;
	c = b * 60;
	d = c * 60;
	printf("%d Tage sind %d Stunden, %d Minuten und %d Sekunden.\n\n",a,b,c,d);
  return 0;
  }
