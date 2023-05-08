#include <stdio.h>
#include <string.h>
int main()
{
    char nombre[60];
    int i;
    printf("Ingrese su nombre\n");
    scanf("%[^\n]", nombre);
    printf("Welcome %s\n", nombre);
    for (i=strlen(nombre)-1; i>=0; i--){
        printf(" %c", nombre[i]);
    }
}