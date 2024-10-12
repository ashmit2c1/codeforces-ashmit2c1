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

bool solveFunction(string n){
    forloop(0,n.size()){
        if(n[i]!='4'&&n[i]!='1'){return false;}
    }
    bool isMagic=true;
    forloop(0,n.size()){
        if(n[i]=='1'&&n[i+1]=='4'&&n[i+2]=='4'){i+=2;}
        else if(n[i]=='1'&&n[i+1]=='4'){i++;}
        else if(n[i]=='1'){continue;}
        else{
            isMagic=false;
        }
    }
    if(isMagic==true){return true;}else{return false;}
}
void solution(){
    string n;
    cin >> n;
    bool ans = solveFunction(n);
    if(ans==true){print("YES")}else{print("NO")}
}
int main(){

    solution();
}