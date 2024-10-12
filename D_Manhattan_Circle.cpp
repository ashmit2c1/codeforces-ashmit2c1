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
pair<lint,lint>solveFunction(vector<vector<char>>&matrix){
    lint n=matrix.size();lint m=matrix[0].size();
    lint sumRow=0;lint sumCol=0;lint rowFound=0;lint colFound=0;
    forloop(0,n){
        secondfor(0,m){
            if(matrix[i][j]=='#'){
                sumRow+=i;sumCol+=j;rowFound++;colFound++;
            }
        }
    }
    lint ansRow = 1+sumRow/rowFound;
    lint ansCol=1+sumCol/colFound;
    return {ansRow,ansCol};
}
/*pair<lint,lint>solveFunction(vector<vector<char>>&matrix){
    lint n=matrix.size();lint m=matrix[0].size();
    lint sumRow=0;lint sumCol=0;lint cnt=0;
    forloop(0,n){
        secondfor(0,m){
            if(matrix[i][j]=='#'){
                sumRow+=i;sumCol+=j;cnt++;
            }
        }
    }
    lint ansRow = 1+sumRow/cnt;
    lint ansCol = 1+sumCol/cnt;
    return {ansRow,ansCol};
}*/
void solution(int test){
    while(test--){
        lint n;lint m;cin >> n >> m;
        vector<vector<char>>matrix(n,vector<char>(m,0));
        forloop(0,n){
            secondfor(0,m){
                cin>>matrix[i][j];
            }
        }
        pair<lint,lint>ans=solveFunction(matrix);
        cout << ans.first << " " << ans.second << "\n";
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}