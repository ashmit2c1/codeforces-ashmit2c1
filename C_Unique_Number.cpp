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


vector<lint>solveFunction(lint n){
    vector<lint>ans;
    if(n>45){ans.push_back(-1);return ans;}
    if(n<=9){ans.push_back(n);return ans;}
    for(lint i=9;i>=1;i--){
        if(n>=i){
            ans.push_back(i);
            n-=i;
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>ans=solveFunction(n);
        forloop(0,ans.size()){cout<<ans[i];}
        cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}