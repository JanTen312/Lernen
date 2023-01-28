#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {   
        for (int x = 0; x < size; x++)
        {
             if(array[x] > array[x+1])
            {
                int temp = array[x];
                array[x] = array[x+1];
                array[x+1] = temp;                
            }   
        }             
    }   
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    
}

int main()
{
    int zahlen[20] = {11, 1, 5, 7, 9, 16, 18, 30, 23, 4, 9, 77, 55, 907, 1337, 124, 325, 23, 99, 84};

    int anzahlElemente = sizeof(zahlen) / sizeof(zahlen[0]);   

    bubbleSort(zahlen, anzahlElemente);

    printArray(zahlen, anzahlElemente);

    return 0;
}
