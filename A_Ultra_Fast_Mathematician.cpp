#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define forloop(x,y) for(int i=x;i<y;i++)
#define secondfor(x,y) for(int j=x;j<y;j++)
#define print(x) cout << x << "\n";


void solution(){
    string s1;string s2;cin >>s1>>s2;
    string ans="";
    forloop(0,s1.size()){
        if(s1[i]=='1'&&s2[i]=='0'){ans+='1';}
        else if(s1[i]=='0'&&s2[i]=='1'){ans+='1';}
        else if(s1[i]=='1'&&s2[i]=='1'){ans+='0';}
        else if(s1[i]=='0'&&s2[i]=='0'){ans+='0';}
    }
    print(ans)

}
int main(){

    solution();
}