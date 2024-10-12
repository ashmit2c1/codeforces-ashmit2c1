#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(int test){
    while(test--){
        ll n;
        cin >> n;
        vector<vector<char>>matrix(n,vector<char>(n));
        forloop(0,n){
            secondfor(0,4){
                cin >> matrix[i][j];
            }
        }
        vector<int>ans;
        forloop(0,n){
            secondfor(0,4){
                if(matrix[i][j]=='#'){ans.push_back(j+1);}
            }
        }
        reverse(ans.begin(),ans.end());
        forloop(0,ans.size()){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}