#include <stdio.h>

int main()
{
    char nombre[60];
    printf("Ingrese su nombre\n");
    scanf("%[^\n]", nombre);
    printf("Su nombre es %s", nombre);
    return 0;
}