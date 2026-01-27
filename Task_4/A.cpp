#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }

#define vi vector<int>
#define endl "\n"

int func(int n){
if(n==0) return 1;
return n*func(n-1);
}
int32_t main (){
int n;
cin>>n;
cout<<func(n);
return 0;
}
