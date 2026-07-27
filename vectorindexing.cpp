#include <bits/stdc++.h>
using namespace std;
signed main()
{
int N, Q;
cin >> N >> Q;
vector<int> A(N);
for (int i = 0; i < N; i++)
{
    cin >> A[i];
}
for (int i = 0; i < Q; i++)
{
    int x;
    cin >> x;
    cout << A[x - 1] << " ";
}
return 0;
}
