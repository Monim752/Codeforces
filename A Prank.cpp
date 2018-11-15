#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[1000];
    cin>>n;
    int cnt=0;
    int ecnt=0,ocnt=0;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];

            if(a[i]%2==0)
            {
                cnt++;
                ecnt++;
            }
            if(a[i]%2!=0)
            {
                cnt--;
                ocnt++;
            }
    }
    int res=ecnt+ocnt-cnt;
    cout<<res<<endl;
    return 0;

}
