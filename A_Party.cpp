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

lint findDepth(lint manager,vector<lint>&arr){
    lint depth=1;
    while(arr[manager]!=-1){
        manager=arr[manager]-1;
        depth++;
    }
    return depth;
}
lint solveFunction(vector<lint>arr){
    lint n=arr.size();
    lint maxDepth=lintmin;
    forloop(0,n){
        lint depth = findDepth(i,arr);
        maxDepth=max(maxDepth,depth);
    }
    return maxDepth;
}
void solution(){
    lint n;
    cin >> n;
    vector<lint>arr;
    forloop(0,n){
        lint x;cin >> x;arr.push_back(x);
    }
    lint ans=solveFunction(arr);
    print(ans)

}
int main(){

    solution();
}