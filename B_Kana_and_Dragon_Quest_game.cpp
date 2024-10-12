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

bool solveFunction(lint h,lint n,lint m){
    while(n-- && h>20){
        h=10+h/2;
    }
    while(m--){
        h-=10;
    }
    if(h>0){return false;}else{return true;}
}
void solution(int test){
    while(test--){
        lint h;lint n;lint m;
        cin >> h >> n >> m;
        bool ans = solveFunction(h,n,m);
        if(ans==true){print("YES")}
        else{print("NO")}
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}