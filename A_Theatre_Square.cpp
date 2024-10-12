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

lint solveFunction(lint n,lint m,lint a){
        lint numtocoverlength;
        lint numtocoverbreadh;
        if(n%a==0){numtocoverlength=n/a;}
        else{numtocoverlength=1+n/a;}
        if(m%a==0){numtocoverbreadh=m/a;}
        else{numtocoverbreadh=1+m/a;}
        return numtocoverlength*numtocoverbreadh;
    
}
void solution(){
    lint n;lint m;lint a;
    cin >> n >> m >> a;
    lint ans=solveFunction(n,m,a);
    print(ans)

}
int main(){

    solution();
}