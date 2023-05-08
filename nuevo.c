#include <stdio.h>
int main()
{
    char nombre[60];
    printf("Ingrese su nombre\n");
    scanf("%[^\n]", nombre);
    printf("Welcome %s", nombre);
}