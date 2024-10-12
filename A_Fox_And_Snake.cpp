#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";

void solution(){
    ll n;ll m;cin >> n >> m;bool lastElement=true;
    vector<vector<char>>matrix(n,vector<char>(m,0));
    forloop(0,n){
        if(i%2==0){
            secondfor(0,m){matrix[i][j]='#';}
        }
        else{
            if(lastElement==true){
                secondfor(0,m-1){matrix[i][j]='.';}
                matrix[i][m-1]='#';
                lastElement=false;
            }
            else{
                secondfor(1,m){matrix[i][j]='.';}
                matrix[i][0]='#';
                lastElement=true;
            }
        }
    }
    forloop(0,n){
        secondfor(0,m){
            cout << matrix[i][j];
        }
        cout << "\n";
    }
}
int main(){

    solution();
}