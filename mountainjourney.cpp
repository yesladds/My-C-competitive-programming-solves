#include <bits/stdc++.h>
using namespace std;
signed main()
{
int N;
int M;
cin >> N >> M;
vector<int> A(N);
vector<int> B(M);
for (int i = 0; i < N; i++)
{
cin >> A[i];
}
sort(A.begin(), A.end());
for (int i = 0; i < M; i++)
{
cin >> B[i];
}
sort(B.begin(), B.end(), greater<int>());
for (int i = 0; i < M; i++)
{
A.push_back(B[i]);
}
for (int i = 0; i < A.size(); i++)
{
cout << A[i] << " ";
}
    return 0;
}
