#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
int t;
cin >> t;
vector<int> A(t);
for ( int i = 0; i < t; i++ ){
	cin >> A[i];
	cout << cbrt(A[i]) << endl;
}
return 0;
}
