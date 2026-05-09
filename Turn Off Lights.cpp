#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool canTurnOff(const string &s,int k,int m){
    int n=s.size(),ops=0,active=0;
    vector<int> mark(n+1,0);
    for(int i=0;i<n;i++){
        active+=mark[i];
        if(s[i]=='1' && active==0){
            ops++;
            if(ops>m) return false;
            active++;
            if(i+k<n) mark[i+k]--;
        }
    }
    return true;
}

int main(){
    int n,m; string s;
    cin>>n>>m>>s;
    for(int k=1;k<=n;k++){
        if(canTurnOff(s,k,m)){ cout<<k; break; }
    }
    return 0;
}
