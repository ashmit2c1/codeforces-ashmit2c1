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
    lint rem=0;
    vector<lint>arr;
    if(n>=1000){
        rem=n%1000;
        arr.push_back(n-rem);
        n%=1000;
    }
    if(n>=100){
        rem=n%100;
        arr.push_back(n-rem);
        n%=100;
    }
    if(n>=10){
        rem=n%10;
        arr.push_back(n-rem);
        n%=10;
    }
    if(n<10 && n>=1){
        arr.push_back(n);
    }
    return arr;
}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        vector<lint>ans=solveFunction(n);
        print(ans.size())
        output(ans);
        cout << "\n";

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}