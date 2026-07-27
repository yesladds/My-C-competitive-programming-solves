#include <bits/stdc++.h>
using namespace std;
signed main(){
long long N;
long long A;
long long B;
cin >> N >> A >> B;
for ( int i = 1; i <= N; i++ ){
if ( i % A == 0 && i % B == 0 ){
cout << "FizzBuzz";
}
else if ( i % A == 0 ){
cout << "Fizz";
}
else if ( i % B == 0 ){
cout << "Buzz";
}
else{
cout << i;
}
cout << endl;
}
return 0;
}
