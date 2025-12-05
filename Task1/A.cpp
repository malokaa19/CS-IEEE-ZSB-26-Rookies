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
int n;
cin>>n;
int coun=0;
while(n--){
    int a[3];
int countone=0;
int countzero=0;
for(int i=0;i<3;i++){
    cin>>a[i];
}
for(int i=0;i<3;i++){
    if(a[i]==1){
        countone++;
    }else countzero++;
}
if(countone>countzero){
   coun++;
}
}
cout<<coun<<endl;

return 0;
}
