#include<bits/stdc++.h>
using namespace std;
void solution(){
    string s;cin>>s;vector<int>ans;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+'){ans.push_back(s[i]-'0');}
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
        if(i<ans.size()-1){cout<<"+";}
    }

}
int main(){

    solution();
}