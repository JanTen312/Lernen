#include <stdio.h>
  int main() {
	float a,b,c;
	printf("Geben Sie die verbrauchten Liter ein: ");
	scanf("%f",&a);
	printf("Geben Sie die gefahrenen Kilometer ein: ");
	scanf("%f",&b);
	c = a * 100 / b;
	printf("Der Durschsnittsverbrauch liegt bei: %.2f Liter\n\n",c);
	return 0;
  }
	
