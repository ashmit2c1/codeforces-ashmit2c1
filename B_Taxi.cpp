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
lint solveFunction(lint n,vector<lint>&arr){
    vector<lint>cnt(5);
    forloop(0,arr.size()){
        cnt[arr[i]]++;
    }
    lint cab=0;
    cab+=cnt[4];
    lint minPair31=min(cnt[3],cnt[1]);
    cnt[3]-=minPair31;
    cnt[1]-=minPair31;
    cab+=minPair31;
    cab+=cnt[3];
    cab+=cnt[2]/2;
    cnt[2]=cnt[2]%2;
    if(cnt[2]>0){
        if(cnt[1]>=2){
            cab++;
            cnt[1]-=2;
        }
        else{
            cab++;
            return cab;
        }
    }
    cab+=cnt[1]/4;
    if(cnt[1]%4>0){
        cab++;
    }
    return cab;
}
void solution(){
    lint n;cin >> n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(n,arr);
    print(ans)

}
int main(){

    solution();
}