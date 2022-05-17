#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	
    fast_io
    int n, k;
    cin >> n >> k;

    int ans = 0;

    while (n--)
    {
        int t;
        cin >> t;
        ans += (t % k == 0) * 1;
    }
    
    cout << ans;
	
	return 0;
}