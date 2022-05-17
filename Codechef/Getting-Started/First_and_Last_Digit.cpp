#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast_io
    
    int t;
    cin >> t;
    while (t--)
    {
        
        int n;
        cin >> n;

        int ans = n % 10;
        while (n >= 10)
        {
            n /= 10;
        }
        
        cout << ans + n << endl;
        
    }
    
	return 0;
}