#include <stdio.h>

int main()
{
    int bigint[100];
    long biglong[100];
    float bigfloat[100];
    double bigdouble[100];

    printf("\nGröße int: %d Bytes", sizeof(int));
    printf("\nGröße long: %d Bytes", sizeof(long));
    printf("\nGröße float: %d Bytes", sizeof(float));
    printf("\nGröße double: %d Bytes\n", sizeof(double));

    printf("\nbigint    Größe: %d Bytes | Größe eines Elements: %d Bytes | Anzahl Elemente: %d\n", sizeof(bigint), sizeof(bigint[0]), sizeof(bigint)/sizeof(bigint[0]));
    printf("\nbiglong   Größe: %d Bytes | Größe eines Elements: %d Bytes | Anzahl Elemente: %d\n", sizeof(biglong), sizeof(biglong[0]), sizeof(biglong)/sizeof(biglong[0]));
    printf("\nbigfloat  Größe: %d Bytes | Größe eines Elements: %d Bytes | Anzahl Elemente: %d\n", sizeof(bigfloat), sizeof(bigfloat[0]), sizeof(bigfloat)/sizeof(bigfloat[0]));
    printf("\nbigdouble Größe: %d Bytes | Größe eines Elements: %d Bytes | Anzahl Elemente: %d\n", sizeof(bigdouble), sizeof(bigdouble[0]), sizeof(bigdouble)/sizeof(bigdouble[0]));



    return 0;
}
