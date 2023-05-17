#include <stdio.h>
/*este programa permite que el usuario
ingrese la dimension que quiera de la matriz.
La matriz va a iniciar con 0
y después se presentara la matriz de misma dimension con 
la diagonal principal*/ 
int main(){
    int i=0, j=0,y,x;
    int matriz[i][j];
    //"y" y x son las variable que guardan las dimensiones ingresadas por el usuario//
    printf("Ingrese las dimensiones de la matriz\n");
    scanf("%d", &y);
    scanf("%d", &x);
    for(i=0;i<y;i++){
        for(j=0;j<x;j++){
            printf("%d ", matriz[y][x]);
        }
        printf("\n");
    }
    printf("Diagonal principal");
    for(i=0;i<y;i++){
        for(j=0; j<x; j++){
            if(i==j){
                matriz[y][x]=1;
                printf("%d ", matriz[y][x]);
            }
            else{
                matriz[y][x]=0;
                printf("%d ", matriz[y][x]);
            }
        }
        printf("\n");
    }
    
    
    return 0;


}