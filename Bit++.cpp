#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x[150];
    int n,res=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>x;

            if(x[0]=='+' || x[1]=='+')
                res++;
            if(x[0]=='-' || x[1]=='-')
                res--;

    }
    cout<<res<<endl;

    return 0;
}
