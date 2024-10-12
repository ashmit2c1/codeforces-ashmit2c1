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

lint findAns(lint n, lint k, vector<lint>& arr) {
    if(n==1){return 0;}
    asort(arr);
    lint currlen=1;
    lint maxlen=1;
    forloop(0,n-1){
        lint diff=arr[i+1]-arr[i];
        if(diff<=k){currlen++;}
        else{
            maxlen=max(maxlen,currlen);
            currlen=1;
        }
    }
    maxlen=max(maxlen,currlen);
    lint removals=n-maxlen;
    return removals;
}

void solution(int test) {
    while (test--) {
        lint n, k;
        cin >> n >> k;
        vector<lint> arr(n);
        
        forloop(0, n) {
            cin >> arr[i];
        }

        lint ans = findAns(n, k, arr);
        print(ans);
    }
}

int main() {
    int test;
    cin >> test;
    solution(test);
}