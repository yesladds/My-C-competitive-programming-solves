#include <bits/stdc++.h>
using namespace std;
signed main(){
	long long N;
	int x;
	int num_div = 0;
	cin >> N >> x;
	while ( N != 0 ){
		N /= x;
		num_div += 1;
	}
	cout << num_div;
	return 0;
}
