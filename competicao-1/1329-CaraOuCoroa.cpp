#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, moeda, joao, maria;

    cin >> n;

    while (n != 0) {
        joao = 0;
        maria = 0;

        for (int i = 0; i < n; i++) {
            cin >> moeda;
            
            if(moeda == 1)
                joao++;
            else
                maria++;
        }
        
        cout << "Mary won " << maria << " times and John won " << joao << " times\n";

        cin >> n;
    }
    
	
	return 0;
}
