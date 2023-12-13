#include <stdio.h>

int main(){
    int num1 = 0, num2 = 1, aux, n, i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d", num1);
        
        if(i != n)
            printf(" ");

        aux = num1;
        num1 = num2;
        num2 = aux + num2;
    } 

    printf("\n");
 
    return 0;
}