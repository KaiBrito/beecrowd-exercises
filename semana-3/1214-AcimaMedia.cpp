#include <bits/stdc++.h>

using namespace std;

int main()
{
    int C, num[1001];
    int i, j;
    float soma, media, qtdAluno;

    cin >> C;

    for (i = 0; i < C; i++) {
        cin >> num[0];
        soma = 0;
        qtdAluno = 0;

        for (j = 1; j <= num[0]; j++) {
            cin >> num[j];
            soma += num[j];
        }

        media = soma/num[0];
        
        for (j = 1; j <= num[0]; j++) {
            if(num[j] > media)
                qtdAluno++;
        }

        cout << fixed << setprecision(3) << qtdAluno / num[0] * 100 << "%\n";
    }
    
    return 0;
}