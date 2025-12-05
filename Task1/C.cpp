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
int t;
cin>>t;
while(t--){
    int rating;
    cin>>rating;
    if(rating>=1900){
        cout<<"Division 1"<<endl;
    }else if(rating>=1600&&rating<=1899){
    cout<<"Division 2"<<endl;
    }else if(rating>=1400&&rating<=1599){
    cout<<"Division 3"<<endl;
    }else if(rating<=1399){
     cout<<"Division 4"<<endl;
    }
}

return 0;
}
