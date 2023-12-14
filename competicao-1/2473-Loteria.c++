#include <bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> aposta, resultado;
	int n, num, acerto;

	cin >> n;

	for (int i = 0; i < n; i++) {
		acerto = 0;
		aposta.clear();
		resultado.clear();

		for (int j = 0; j < 6; j++) {
			cin >> num;
			aposta.push_back(num);
		}
		for (int j = 0; j < 6; j++) {
			cin >> num;
			resultado.push_back(num);
		}

		for (int j = 0; j < aposta.size(); j++) {
			for (int k = 0; k < resultado.size(); k++) {
				if(aposta[j] == resultado[k])
					acerto++;
			}		
		}

		if(acerto < 3)
			cout << "azar\n";
		if(acerto == 3)
			cout << "terno\n";
		if(acerto == 4)
			cout << "quadra\n";
		if(acerto == 5)
			cout << "quina\n";
		if(acerto == 6)
			cout << "sena\n";
	}

	return 0;
}
