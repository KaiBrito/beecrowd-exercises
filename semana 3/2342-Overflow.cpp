#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, Q, P;
    char C;

    cin >> N;

    cin >> P >> C >> Q;

    if(C == '+') {
        if(P+Q > N)
            cout << "OVERFLOW\n";
        else 
            cout << "OK\n";
    } else {
        if(P*Q > N)
            cout << "OVERFLOW\n";
        else 
            cout << "OK\n";
    }
    
    return 0;
}