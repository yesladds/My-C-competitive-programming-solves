#include <bits/stdc++.h>
#include <bits/stdc++.h>
using namespace std;
signed main(){
int N;
cin >> N;
vector<int> L(N+1);
vector<long long> cnt(N+1);
for (int i = 1; i <= N; i++){
cin >> L[i];
if (L[i] < i){
cnt[L[i]]++;
}
}
long long ans = 0;
long long bad = 0;
for (int i = 1; i <= N; i++){
bad += cnt[i];
if (bad > 0){
ans = max(ans,(bad + i - 1) / i);
}
}
cout << ans;
return 0;
}
