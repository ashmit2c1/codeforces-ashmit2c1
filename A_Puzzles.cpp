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

void solution(){
        lint n;lint m;
        cin >> n >> m;
        vector<lint>arr;
        forloop(0,m){
            lint x;cin >> x;arr.push_back(x);
        }
        asort(arr);
        lint minDiff=lintmax;
        forloop(0,m-n+1){
            lint diff=arr[i+n-1]-arr[i];
            minDiff=min(minDiff,diff);
        }
        print(minDiff)
}
int main(){

    solution();
}