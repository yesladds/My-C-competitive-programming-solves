#include <bits/stdc++.h>
using namespace std;

signed main()
{
int N;
cin >> N;
vector<int> A(N);
for ( int i = 0; i < N; i++ ){
	cin >> A[i];}
sort(A.begin(),A.end(),greater<int>());
cout << A[0] + A[1];
		
	



	
return 0;
}
