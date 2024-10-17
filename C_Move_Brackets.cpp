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

lint solveFunction(lint n,string s){
    if(n==2){
        if(s=="()"){return 0;}
        if(s==")("){return 1;}
    }
    lint balance=0;
    lint moves=0;
    forloop(0,s.size()-1){
        if(s[i]=='('){balance++;}
        else{balance--;}
        if(balance<0){
            moves++;
            balance++;
        }
    }
    return moves;

}
void solution(int test){
    while(test--){
        lint n;cin >> n;
        string s;cin >> s;
        lint ans=solveFunction(n,s);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}