#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast_io
    
    int x;
    float y;
    cin >> x >> y;

    if(x % 5 == 0 && y - 0.5 >= x)
    {
        cout << ((y - x)  - (0.5));
    }else{
        cout << y;
    }
    
	return 0;
}