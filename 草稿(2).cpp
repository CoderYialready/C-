#include <iostream>
using namespace std;
int main(){
    int m, n, i, cnt=0, vis[100000]={0};
    cin>>m>>n;
    vis[m] = vis[n] = 1;
    for(i=1; cnt < 10000; i++)
        if(vis[i]) vis[i+m] = vis[i+n] = 1, cnt++;
        else cnt = 0;
    cout<<i-10000-1<<endl;
    return 0;
}
