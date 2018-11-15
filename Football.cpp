#include<bits/stdc++.h>
using namespace std;
int main()
{
    string p;
    int cnt=1;
    cin>>p;
    for(int i=0; i<p.length(); i++)
    {
        if(p[i]==p[i-1])
        {
            cnt+=1;
            if(cnt==7)
            {
               cout<<"YES"<<endl;
               return 0;
            }
        }
        else
        {
            cnt=1;
        }

    }
    cout<<"NO"<<endl;
    return 0;
}
