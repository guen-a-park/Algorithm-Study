#include <bits/stdc++.h>
using namespace std;
int n;
const int mod=1e9;
int cache[105][10];
int solve(int idx,int pre){
    if(pre<0||pre>9)
        return 0;
    if(idx==n)
        return 1;
    int &ret=cache[idx][pre];
    if(ret!=-1)
        return ret;
    ret=0;
    if(idx==0){
        for(int i=1;i<=9;i++){
            ret+=solve(idx+1,i);
            ret%=mod;
        }
    }
    else{
        ret+=solve(idx+1,pre-1);
        ret%=mod;
        ret+=solve(idx+1,pre+1);
        ret%=mod;
    }
    return ret;
}
int main(){
    memset(cache,-1,sizeof(cache));
    scanf("%d",&n);
    printf("%d",solve(0,0));
    return 0;
}