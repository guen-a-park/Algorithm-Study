#include <bits/stdc++.h>
using namespace std;
int cache[1000005];
// [1,1e6]

int solve(int n)
{
    if(n==1)
        return 0;
    int &ret=cache[n];
    if(ret!=-1)
        return ret;
    ret=solve(n-1)+1;
    if(n%3==0)
        ret=min(ret,solve(n/3)+1);
    if(n%2==0)
        ret=min(ret,solve(n/2)+1);
    return ret;
}
int main()
{
    memset(cache,-1,sizeof(cache));
    int n;
    scanf("%d",&n);
    printf("%d\n",solve(n));
    return 0;
}