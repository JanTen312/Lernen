#include <stdio.h>
  int main() {
    int aint[100];
    long along[100];
    float afloat[100];
    double adouble[100];
    
    
    printf("int Größe: %d Bytes\n",sizeof(int));
    printf("long Größe: %d Bytes\n",sizeof(long));
    printf("float Größe: %d Bytes\n",sizeof(float));
    printf("double Größe: %d Bytes\n",sizeof(double));
    
    int bigint[100];
    long biglong[100];
    float bigfloat[100];
    double bigdouble[100];

    printf("\nGröße int: %d Bytes", sizeof(int));
    printf("\nGröße long: %d Bytes", sizeof(long));
    printf("\nGröße float: %d Bytes", sizeof(float));
    printf("\nGröße double: %d Bytes\n", sizeof(double));
  return 0;
  }
