#include <bits/stdc++.h>
using namespace std;
signed main(){
int N;
int m;
cin >> N >> m;
int cnt_numofsch = 0;
int current_total = 0;
vector<int> num_lunchboxpersch(m);
for (int i = 0; i < m; i++){
cin >> num_lunchboxpersch[i];
}
sort(num_lunchboxpersch.begin(), num_lunchboxpersch.end());
for (int i = 0; i < m; i++){
if (current_total + num_lunchboxpersch[i] <= N){
current_total = current_total + num_lunchboxpersch[i];
cnt_numofsch++;
}
else{
break;
}
}
cout << cnt_numofsch;
return 0;
}
