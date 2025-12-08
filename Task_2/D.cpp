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
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
int freq[200]={0};
for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    int index=0;
    for(int i=0;i<200;i++){
       if(freq[i]==1){
        index=i;
        break;
       }
    }
    for(int i=0;i<n;i++){
        if(a[i]==index){
            cout<<i+1<<endl;
        }
    }
}
return 0;
}
