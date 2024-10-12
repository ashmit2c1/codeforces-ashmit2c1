#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(){
    double n;cin >> n;
    vector<double>ans;
    forloop(0,n){
        double x;cin>>x;ans.push_back(x/100.0);
    }
    double sum=0;
    forloop(0,n){sum+=ans[i];}
    cout <<fixed << setprecision(12)<< sum*100/n << "\n";



}
int main(){

    solution();
}