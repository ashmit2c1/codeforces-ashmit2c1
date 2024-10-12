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

bool findAverage(lint n, vector<lint>& arr, lint mid) {
    lint sum = 0;
    forloop(0, n) {
        sum += arr[i];
    }
    lint average = sum / n;
    if (average + mid < average / 2) {
        return true;
    }
    double reference = (double)(sum+mid)/n/2;
    lint cnt = 0;
    forloop(0, n) {
        if (arr[i]<reference){cnt++;
        }
        if (cnt>n/2) {return true;}
    }
    return false;
}
lint findAns(lint n,vector<lint>&arr){
    if(n==1 || n==2){return -1;}
    lint sum=0;
    forloop(0,n){
        sum+=arr[i];
    }
    lint average = sum/n;
    lint reference = average/2;
    lint cnt=0;
    forloop(0,n){
        if(arr[i]<reference){cnt++;}
        if(cnt>n/2){
            return 0;
        }
    }
    lint start=0;
    lint end = lintmax;
    lint ans=-1;
    while(start<=end){
        lint mid = start + (end-start)/2;
        if(findAverage(n,arr,mid)==true){
            ans=mid;end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return ans;
}

void solution(int test){
    while(test--){
        lint n;
        cin >> n;
        vector<lint>arr;
        forloop(0,n){
            lint x;
            cin >> x;
            arr.push_back(x);
        }
        lint ans=findAns(n,arr);
        print(ans)

    }
}
int main(){
    int test;
    cin >> test;
    solution(test);
}