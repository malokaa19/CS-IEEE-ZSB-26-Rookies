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
    string s;
    cin>>s;
    int freq[26]={0};
    int counter=0;
   for(int i=0;i<n;i++){
    int index=s[i]-'A';
    if(freq[index]==0){
        counter+=2;
        freq[index]=1;
    }else{
    counter+=1;
    }
   }
    cout<<counter<<endl;

}
return 0;
}
