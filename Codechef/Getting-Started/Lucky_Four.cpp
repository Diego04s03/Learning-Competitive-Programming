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

        int ans = 0;
       
        while (n > 0)
        {
            if(n % 10 == 4) ans++;
            n/= 10;
        }
        
        cout << ans << endl;
    }
	return 0;
}