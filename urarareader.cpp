#include <bits/stdc++.h>
using namespace std;
signed main(){
int N;
int K;
int input;
cin >> N >> K;
for ( int i = 0; i < N; i++ ){
	cin >> input;
	if ( input >= K ){
	cout << "YES" << endl;
	}
	else if ( input < K ){
	cout << "NO" << endl;
	}
}
    return 0;
}
