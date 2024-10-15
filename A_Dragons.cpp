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
bool solveFunction(lint s,lint n){
    multiset<pair<lint,lint>>st;
    forloop(0,n){
        lint x;lint y;cin >> x >> y;
        st.insert(mp(x,y));
    }
    lint energy=s;
    for(auto it=st.begin();it!=st.end();it++){
        lint enemyEnergy = it->first;
        if(energy>enemyEnergy){energy+=it->second;}
        else{return false;}
    }
    return true;

}
/*bool solveFunction(lint s,lint n){
    lint energy=s;
    vector<pair<lint,lint>>dragons(n);
    forloop(0,n){
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons.begin(),dragons.end());
    forloop(0,n){
        if(energy>dragons[i].first){
            energy+=dragons[i].second;
        }
        else{
            return false;
        }
    }
    return true;
}*/
void solution(){
    lint s;lint n;
    cin >> s >> n;
    bool ans=solveFunction(s,n);
    if(ans==true){print("YES")}else{print("NO")}

}
int main(){

    solution();
}