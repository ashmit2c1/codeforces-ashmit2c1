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

string findString(char shift, string s){
    string dict = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string answer = "";
    int len = s.length();
    
    for(int i = 0; i < len; i++){
        int index = dict.find(s[i]);
        if(shift == 'R'){
            if(index > 0)
                answer += dict[index - 1];
        }
        else{
            if(index < dict.size() - 1) 
                answer += dict[index + 1];
        }
    }
    return answer;
}
void solution(){
    char shift;
    cin >> shift;
    string s;
    cin >> s;
    string ans = findString(shift,s);
    print(ans)

}
int main(){

    solution();
}