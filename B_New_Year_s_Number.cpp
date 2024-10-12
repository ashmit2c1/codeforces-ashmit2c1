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

bool findFunction(lint n){
    if(n<2020){return false;}
    if(n%2020==0){return true;}
    if(n%2021==0){return true;}
    while(n>=2020){
        if(n%2020==0 || n%2021==0){return true;}
        n-=2021;
    }
    return false;
}

void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        bool ans = findFunction(n);
        if(ans==true){print("YES")}
        else{print("NO")}

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}