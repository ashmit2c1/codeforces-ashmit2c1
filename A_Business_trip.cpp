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

lint findAns(lint n,vector<lint>&arr){
    if(n==0){return 0;}
    lint sum=0; lint index=0;
    forloop(0,12){
        sum+=arr[i];
        if(sum>=n){index=i+1;break;}
    }
    if(index==0){return -1;}
    return index;
}
void solution(){
    lint n;
    cin >> n;
    vector<lint>arr;
    forloop(0,12){
        lint x;
        cin >> x;
        arr.push_back(x);
    }
    dsort(arr);
    lint ans=findAns(n,arr);
    print(ans)

}
int main(){

    solution();
}