#include <bits/stdc++.h> 
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

int main() {
	fast_io
    
    int t;
    cin >> t;

    string shipClass[] = {"other","BattleShip","Cruiser","Destroyer","other","Frigate"};

    while (t--)
    {
        char c;
        cin >> c;
        if(c > 90){
            cout << shipClass[c - 97] << endl;
        }else{
            cout << shipClass[c - 65] << endl;
        }
    }
	return 0;
}