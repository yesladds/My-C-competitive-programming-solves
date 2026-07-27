#include <bits/stdc++.h>
using namespace std;
signed main(){
long long d;
cin >> d;
long long sum = 0;
for ( int i = 0; i < d; i++ ){
long long number;
cin >> number;
sum += number;
}
cout << sum;
	return 0;
}
