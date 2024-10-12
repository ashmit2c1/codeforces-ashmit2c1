#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(int weight1,int weight2,int&cnt){
    while(weight1<=weight2){
        weight1*=3;weight2*=2;cnt++;
    }
    return cnt;
}
void solution(){
    ll limakweight;ll bobweight;
    cin >> limakweight >> bobweight;int cnt=0;
    int ans=solve(limakweight,bobweight,cnt);
    cout << cnt << "\n";


}
int main(){

    solution();
}