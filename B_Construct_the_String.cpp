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

string findString(lint n,lint a,lint b,string dict){
    string ans;
    string s;
    forloop(0,b){
        s[i]=dict[i];
    }
    lint k=0;
    while(n--){
        ans+=s[k];
        k++;
        if(k==b){k=0;}
    }
    return ans;
}
void solution(int test){
    while(test--){
        lint n,a,b;
        cin >> n >> a >> b;
        string dict="abcdefghijklmnopqrstuvwxyz";
        string ans=findString(n,a,b,dict);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}