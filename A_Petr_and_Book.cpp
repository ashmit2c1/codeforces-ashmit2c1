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

lint solveFunction(lint n,vector<lint>arr){
    lint pagesRead=0;
    lint index=0;
    while(pagesRead<n){
        pagesRead+=arr[index];
        if(index==6){index=0;}
        else{index++;}
    }
    if(index==0){index=6;}
    else{index--;}
    return index+1;
}
void solution(){
    lint n;
    cin >> n;
    vector<lint>arr;
    forloop(0,7){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(n,arr);
    print(ans)
}
int main(){

    solution();
}