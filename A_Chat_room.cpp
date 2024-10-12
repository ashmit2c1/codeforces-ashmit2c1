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
bool solveFunction(string s){
    lint n=s.size();
    string text="hello";
    lint j=0;
    forloop(0,n){
        if(s[i]==text[j]){j++;}
        if(j==text.size()){return true;}
    }
    return false;
}
void solution(){
    string s;cin >> s;
    bool ans = solveFunction(s);
    if(ans==true){print("YES")}
    else{print("NO")}

}
int main(){

    solution();
}