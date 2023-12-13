#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, num, qtd;
	int i, j;
	
	cin >> n;
	
	for(i = 0; i < n; i++){
	    
		qtd = 2;
		cin >> num;
		
		for(j = 2; j <= sqrt(num); j++){
			if(num % j == 0){
				qtd++;
			}
		}
		
		if(qtd == 2){
			cout << "Prime\n";
		} else {
			cout << "Not Prime\n";
		}
	}
		
	return 0;
}