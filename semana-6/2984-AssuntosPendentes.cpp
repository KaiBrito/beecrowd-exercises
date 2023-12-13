#include <bits/stdc++.h>

using namespace std;

int main()
{
	string palavra;
	stack<char> assunto;
	
	cin >> palavra;
	
	for(int i = 0; i < palavra.size(); i++) {
		if(palavra[i] == '(')
			assunto.push(palavra[i]);
		else if(')') {
			if(!assunto.empty()) {
				assunto.pop();
			}
		}
	}
	
	if(assunto.size() > 0)
		cout << "Ainda temos" << assunto.size() << "assunto(s) pendente(s)!\n";
	else 
		cout << "Partiu RU!\n";
	
	return 0;
}
