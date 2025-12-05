#include <bits/stdc++.h>
using namespace std;
#define FAST std::ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
template<typename T> ostream& operator<<(ostream& os, vector<T>& v) { for (auto& i : v) os << i << ' '; return os; }
template<typename T> istream& operator>>(istream& is, vector<T>& v) { for (auto& i : v) is >> i; return is; }
#define int long long
#define vi vector<int>
#define endl "\n"


int32_t main (){
ios::sync_with_stdio(false);
cin.tie(nullptr);
int k,r;
cin>>k>>r;
int n=1;
while((n*k)%10!=0&&(n*k)%10!=r){
    n++;
}
cout<<n<<endl;

return 0;
}
