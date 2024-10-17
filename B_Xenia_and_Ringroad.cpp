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

lint solveFunction(lint n,lint m,vector<lint>&arr){
    lint currentPosition=1;
    lint time=0;
    forloop(0,arr.size()){
        lint nextPosition=arr[i];
        if(nextPosition>=currentPosition){
            lint diff1=nextPosition-currentPosition;
            time+=diff1;
        }
        else{
            lint timeToReach1=n-currentPosition;
            lint timeToNext=nextPosition;
            time+=timeToReach1+timeToNext;
        }
        currentPosition=nextPosition;
    }
    return time;
}
void solution(){
    lint n;cin >> n;lint m;cin >> m;
    vector<lint>arr;
    forloop(0,m){lint x;cin >> x;arr.push_back(x);}
    lint ans=solveFunction(n,m,arr);
    print(ans)

}
int main(){

    solution();
}