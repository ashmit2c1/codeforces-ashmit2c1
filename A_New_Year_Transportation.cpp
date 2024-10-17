#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())
#define intmax INT_MAX
#define intmin INT_MIN
#define lintmax LLONG_MAX
#define lintmin LLONG_MIN
#define mp(x,y) make_pair(x,y)

bool solveFunction(vector<lint>&arr,lint t){
    lint portal=0;
    while(portal<t-1){
        portal+=arr[portal];
    }
    if(portal==t-1){
        return true;
    }
    else{
        return false;
    }
}
void solution(){
    lint n;lint t;cin >> n >> t;
    vector<lint>arr;
    forloop(0,n-1){lint x; cin >> x;arr.push_back(x);}
    bool ans=solveFunction(arr,t);
    if(ans==true){print("YES")}else{print("NO")}

}
int main(){

    solution();
}