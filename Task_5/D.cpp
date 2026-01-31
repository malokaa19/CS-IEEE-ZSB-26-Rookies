#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"

int32_t main (){
int x;
cin>>x;
int a=1,b=x;

for (int i=1;i<=sqrt(x);i++){
  if(x%i==0){
    int first=i;
    int second=x/i;
    if (__gcd(first,second)==1) {
            a=first;
            b=second;
        }
    }
}
cout<<a<<" "<<b<<endl;
return 0;
}
