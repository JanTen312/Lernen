#include <stdio.h>
void main() {
	int paare[5][2]={{1,2},{5,6},{4,4},{23482,32492374},{3,67}};
	for(int a=0;a<5;a++) {
	  printf("\nDas Zahlenpaar ist: %d | %d \n",paare[a][0],paare[a][1]);
	}
}
