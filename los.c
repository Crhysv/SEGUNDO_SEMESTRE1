#include <stdio.h>

int main (){
    int candidato[5];
    int voto=0, i;
    while(voto!=0){
        printf("Ingrese el numero del candidato para registrar el voto, 0 para terminar\n");
        scanf("%d", &voto);
        if(voto>=1 || voto<=5){
            candidato[voto-1]++;  
        }
        else{
            printf("Candidato no registrado");
        }
        

    }
    printf("Votos de candidato 1: %d  Votos candidato 2: %d", candidato [1], candidato[2]);
    return 0;

}