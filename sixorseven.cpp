#include <bits/stdc++.h>
using namespace std;
signed main(){
string x;
cin >> x;
for (int i = 0; i + 1 < x.size(); i++){
if (x[i] == '6' and x[i+1] == '7'){
	cout << "YES";
	return 0;}
}
cout << "NO";
	return 0;	
}
