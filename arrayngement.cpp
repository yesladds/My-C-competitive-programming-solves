#include <bits/stdc++.h>
using namespace std;
signed main(){
int N;
cin >> N;
vector<long long> A(N);
for (int i = 0; i < N; i++) {
cin >> A[i];
}
sort(A.begin(), A.end());
vector<long long> B;
for (int i = 0; i < N / 2; i++) {
B.push_back(A[N - 1 - i]);
B.push_back(A[i]);
}
if (N % 2 == 1) {
B.push_back(A[N / 2]);
}
long long ans = B[0] + B[1];
for (int i = 0; i < N - 1; i++) {
ans = max(ans, B[i] + B[i + 1]);
}
cout << ans << "\n";
for (int i = 0; i < N; i++) {
cout << B[i] << " ";
}
return 0;
}
