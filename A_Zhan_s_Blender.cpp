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

lint solveFunction(lint n,lint x,lint y){
    if(x>=y){
        if(n%y==0){return n/y;}
        else{return 1+n/y;}
    }
    else{
        lint time = n/x;
        if(n%x==0){return time;}
        else{return time+1;}
    }
}
void solution(int test){
    while(test--){
        lint n;lint x;lint y;
        cin >> n >> x >> y;
        lint ans=solveFunction(n,x,y);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}