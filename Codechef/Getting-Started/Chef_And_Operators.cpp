#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast_io
    
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        char ans = (a > b) * '>' + (a < b) * '<' + (a == b) * '=';

        cout << ans << endl;
    }
    
    
	return 0;
}