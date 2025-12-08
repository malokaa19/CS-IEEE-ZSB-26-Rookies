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
int arr[5][5];
int x,y;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
        if(arr[i][j]==1){
            x=i;
            y=j;
        }
    }
}
int moves=0;
moves=abs(x-2)+abs(y-2);
cout<<moves;
return 0;
}
