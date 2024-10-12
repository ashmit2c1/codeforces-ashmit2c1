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

void solution(int test){
    while(test--){
        lint n;
        lint m;
        cin >> n >> m;
        vector<lint>arr;
        forloop(0,n){
            lint x;
            cin >> x;
            arr.push_back(x);
        }
        lint sum=0;
        lint cnt=0;
        forloop(0,n){
            if(arr[i]>=m){
                sum+=arr[i];
            }
            if(arr[i]==0){
                if(sum>0){
                    sum--;
                    cnt++;
                }
            }
        }
        print(cnt)
    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}