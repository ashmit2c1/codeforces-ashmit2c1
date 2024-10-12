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

char solveFunction(vector<string>arr){
    forloop(0,arr.size()){
        string s=arr[i];
        forloop(0,s.size()){
            if(s[i]=='?'){
                if(s.find('A')==string::npos){
                    return 'A';
                }
                if(s.find('B')==string::npos){
                    return 'B';
                }
                if(s.find('C')==string::npos){
                    return 'C';
                }
            }
        }
    }
}

void solution(int test){
    while(test--){
        vector<string>arr;
        forloop(0,3){string s;cin >> s;arr.push_back(s);}
        char ans=solveFunction(arr);
        print(ans)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}