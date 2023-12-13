#include <bits/stdc++.h>

using namespace std;

int main()
{
    float x1, x2, y1, y2, res;
    
    cin >> x1 >> y1;
    
    cin >> x2 >> y2;
    
    res = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2)); 
    
    cout << fixed << setprecision(4) << res << "\n";
    
    return 0;
}