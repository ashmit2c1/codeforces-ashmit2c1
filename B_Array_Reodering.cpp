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

lint solveFunction(vector<lint>arr){
    vector<lint>even;vector<lint>odd;
    forloop(0,arr.size()){
        if(arr[i]%2==0){even.push_back(arr[i]);}
        else{odd.push_back(arr[i]);}
    }
    vector<lint>ansarr;
    forloop(0,even.size()){ansarr.push_back(even[i]);}
    forloop(0,odd.size()){ansarr.push_back(odd[i]);}
    lint cnt=0;
    forloop(0,ansarr.size()){
        secondfor(i+1,ansarr.size()){
            lint temp = gcd(ansarr[i],2*ansarr[j]);
            if(temp>1){cnt++;}
        }
    }
    return cnt;
}
void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        vector<lint>arr;
        forloop(0,n){lint x;cin>>x;arr.push_back(x);}
        lint ans=solveFunction(arr);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}