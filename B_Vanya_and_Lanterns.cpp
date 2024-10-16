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
// BINARY SEARCH SOLUTION
/*bool canCover(double mid, vector<lint>& arr, double l ){
    if(arr[0] > mid){
        return false;
    }
    if(l - arr[arr.size()-1] > mid ){
        return false;
    }
    forloop(0, arr.size()-1){
        double diff = arr[i+1] - arr[i];
        if(diff > 2 * mid){ return false; }
    }
    return true;
}
 
double solveFunction(vector<lint>& arr, lint n, lint l){
    double start = 0.0;
    double end = (double)l;
    double ans = 0.0;
    sort(arr.begin(), arr.end());
    while(end - start > 1e-11){ 
        double mid = start + (end - start) / 2.0;
        if(canCover(mid, arr, l)){
            ans = mid;
            end = mid;
        }
        else{
            start = mid;
        }
    }
    return ans;
}*/

lint solveFunction(vector<lint>&arr,lint l){
    sort(arr.begin(),arr.end());
    lint n=arr.size();
    lint distance=max(arr[0],l-arr[n-1])*2;
    forloop(0,n-1){
        lint diff=arr[i+1]-arr[i];
        distance=  max(distance,diff);
    }
    return distance;
}
void solution(){
    lint n;lint l;
    cin >> n >> l;
    vector<lint>arr;
    forloop(0,n){lint x;cin >> x;arr.push_back(x);}
    lint ans = solveFunction(arr,l);
    cout << fixed << setprecision(10) << ans/2.0 << '\n';

}
int main(){

    solution();
}