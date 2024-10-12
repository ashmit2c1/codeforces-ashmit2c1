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

string solveFunction(string s){
    string ans="";
    forloop(0,s.size()){
        char a=s[i];
        if(a!='a'&&a!='e'&&a!='i'&&a!='o'&&a!='y'&&a!='Y'&&a!='u'&&a!='A'&&a!='E'&&a!='O'&&a!='I'&&a!='U'){
            ans+='.';
            ans+=tolower(a);
        }
    }
    return ans;
}
void solution(){
    string s;cin >> s;
    string ans=solveFunction(s);
    print(ans)

}
int main(){

    solution();
}