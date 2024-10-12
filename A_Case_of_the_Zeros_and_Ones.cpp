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

lint findAns(string s){
    lint n=s.size();
    lint cnt=0;
    forloop(0,n-1){
        if(s[i]==s[i+1]){cnt++;}
        if(s[i]!=s[i+1]){i++;}
    }
    return cnt;
}
void solution(){
    lint n;
    cin >> n;
    string s;
    cin >> s;
    lint ans=findAns(s);
    print(ans)

}
int main(){

    solution();
}