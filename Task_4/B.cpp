#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"

void func(int n){
cout<<n<<" ";
if(n==1)return;
if(n%2==0)
func(n/2);
else
func(n*3+1);
}
int32_t main (){
int n;
cin>>n;
func(n);
return 0;
}
