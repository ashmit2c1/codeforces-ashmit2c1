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

bool solveFunction(string s1,string s2,string s3){
    string s4=s1+s2;
    sort(s4.begin(),s4.end());
    sort(s3.begin(),s3.end());
    if(s4==s3){return true;}else{return false;}
}
void solution(){
    string s1;string s2;string s3;
    cin >> s1>>s2>>s3;
    bool ans=solveFunction(s1,s2,s3);
    if(ans==true){print("YES")}
    else{print("NO")}

}
int main(){

    solution();
}