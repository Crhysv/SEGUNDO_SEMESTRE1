#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int numero [10], i;
    srand (time(NULL));
    for(i=1; i<=10; i++) 
    {
        numero[i]=rand() %100;
        printf("%d ", numero[i]);
    }
        printf("Invertidos ");
    for (i=10; i>=1; i--){
       
        printf("%d ", numero[i]);
    }
    
    return 0;
    
}