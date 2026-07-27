#include <bits/stdc++.h>
using namespace std;
signed main() {
int n; cin >> n;
vector<int> vec2(n);
vector<int> cnt(n+1, 0);
//cnt[x] = how many times x appears
for (int i = 0; i < n - 1; i++){
	cin >> vec2[i]; 
	cnt[vec2[i]] += 1;
}
for ( int i = 1; i <= n; i++ ){
	cout << cnt[i] << endl;
}

}
