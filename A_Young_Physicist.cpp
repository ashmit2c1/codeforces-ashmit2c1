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
bool solveFunction(lint n){
    lint sumx=0;lint sumy=0;lint sumz=0;
    while(n--){
        lint x;lint y;lint z;cin>> x >> y >> z;
        sumx+=x;sumy+=y;sumz+=z;
    }
    if(sumx==0 && sumy==0 && sumz==0){return true;}
    else{return false;}
}
void solution(){
    lint n;
    cin >> n ;
    bool ans=solveFunction(n);
    if(ans==true){print("YES")}
    else{print("NO")}

}
int main(){

    solution();
}