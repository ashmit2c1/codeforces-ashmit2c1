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

lint solveFunction(vector<lint>arr){
    lint n=arr.size();
    lint oddCnt=0;
    lint evenCnt=0;
    forloop(0,n){
        if(arr[i]&1){oddCnt++;}
        else{evenCnt++;}
    }
    lint index=0;
    if(oddCnt>evenCnt){
        forloop(0,n){
            if((arr[i]&1)==0){
                index=i;
                return index+1;
            }
        }
    }
    else{
        forloop(0,n){
            if((arr[i]&1)==1){
                index=i;
                return index+1;
            }
        }
    }
}
void solution(){
    lint n;cin >> n;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(arr);
    print(ans)

}
int main(){

    solution();
}