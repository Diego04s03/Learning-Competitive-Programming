#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast_io
    
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;

        if(a + b + c == 180 && a > 0 && b > 0 && c > 0 && (a + b > c || a + c > b || b + c > a)){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
	return 0;
}