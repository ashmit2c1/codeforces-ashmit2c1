#include<bits/stdc++.h>
using namespace std;
#define lint long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";
#define output(arr) for(int i=0;i<arr.size();i++){cout<<arr[i]<<" ";}
#define asort(v) sort(v.begin(), v.end())
#define dsort(v) sort(v.begin(), v.end(), greater<int>())

string findString(string s){
    string ans="";lint n=s.size();
    bool spaceAdded=true;
    forloop(0,n){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            i=i+2;if(spaceAdded==false){ans+=" ";}continue;}
        else{ans+=s[i];spaceAdded=false;}
    }
    return ans;
}
void solution(){
    string s;cin >> s;
    string ans=findString(s);
    print(ans)

}
int main(){

    solution();
}