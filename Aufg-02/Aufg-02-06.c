#include <stdio.h>
  int main () {
	float a,pi,b;
	pi = 3.14159265359;
	printf("Geben Sie den Radius ein: ");
	scanf("%f",&a);
	b = pi * a * a;
	printf("Die Kreisfläche liegt bei: %f\n\n",b);
  return 0;
  }
