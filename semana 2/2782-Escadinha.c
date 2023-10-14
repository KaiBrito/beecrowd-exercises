#include <stdio.h>

#define SIZE 1001

int main()
{
	int n, i;
	int num[SIZE], contaSeq = 1;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++)
		scanf("%d", &num[i]);			
	
    for(i = 2; i < n; i++) {
        if (num[i]-num[i-1] != num[i-1]-num[i-2]) {
            contaSeq++;
        }
    }
        
    printf("%d\n", contaSeq);

	return 0;
}