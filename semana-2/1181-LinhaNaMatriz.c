#include <stdio.h>

#define SIZE 12

int main(){
    float matriz[SIZE][SIZE], soma = 0;
    int linha, i, j;
    char caractere;

    scanf("%d", &linha);

    scanf(" %c", &caractere);  

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%f", &matriz[i][j]);
        }   
    }

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%.1f ", matriz[i][j]);
        }
        printf("\n");  
    }
    
    for (i = linha; i < linha+1; i++) {
        for (j = 0; j < SIZE; j++) {
            soma += matriz[i][j];
        }   
    }
    
    if (caractere == 'S') 
        printf("%.1f", soma);

    if (caractere == 'M') 
        printf("%.1f", soma/SIZE);

    return 0;
}