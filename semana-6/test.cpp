#include <bits/stdc++.h>

using namespace std;

int main()
{
	string palavra;
    int n;
	
	cin >> palavra;

    if (!(palavra[0] == '-' || palavra == "0"))
    {
        palavra = palavra.substr(1);
    }

    n = stoi(palavra);
    cout << n;

	return 0;
}
