#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,v,t,n;
    int cnt=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>p>>v>>t;
        if(p+t+v>=2)
        {
            cnt++;
        }
    }
    cout<<cnt++<<endl;
    return 0;
}
