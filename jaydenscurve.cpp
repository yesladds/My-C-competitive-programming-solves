#include <bits/stdc++.h>
using namespace std;
signed main(){
int R;
int C;
cin >> R >> C;
vector<string> jaydens_dumahh_fig(R);
for (int i = 0; i < R; i++){
cin >> jaydens_dumahh_fig[i];
}
for (int i = 0; i < R; i++){
int first = -1;
int last = -1;
for (int j = 0; j < C; j++){
if (jaydens_dumahh_fig[i][j] == '#'){
if (first == -1){
first = j;
}
last = j;
}
}
if (first != -1){
cout << i + 1 << " " << first + 1 << "\n";
cout << i + 1 << " " << last + 1 << "\n";
cout << i + 2 << " " << first + 1 << "\n";
cout << i + 2 << " " << last + 1 << "\n";
return 0;
}
}
return 0;
}
