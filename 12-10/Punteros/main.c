#include <stdio.h>
#include <stdlib.h>

void CargarArray(int*, int);
void MostrarArray(int*, int);

int main()
{
    system("color da");
 printf("\nPunteros\n");
 system("pause");


    int x=0;
    int* p;
    int* q;
    int numeros [5];

    p = &x;
    q = &x;
    *p = 23;

    printf("\n\n");
    printf("x es: %d\n", *q);
    system("pause");
    system("cls");
    system("color 9f");



    printf("\nArrays y Punteros\n");

    CargarArray(numeros, 5);
    printf("\n\n");
    MostrarArray(numeros, 5);

    return 0;

}

void CargarArray(int *j, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &*(j + i));
    }

    return *j;
}

void MostrarArray(int *k, int tam)
{
    int i;
    printf("Los numeros ingresados son:\n");
    for(i=0; i<tam; i++)
    {
        printf("- %d\n", *(k + i));

    }
}
