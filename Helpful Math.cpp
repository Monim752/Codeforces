#include<bits/stdc++.h>
using namespace std;

int main()
{
    char str[100],ch;
    cin>>str;
    int i,j;
    int l=strlen(str);
    for(i=0; i<l; i++)
    {
        for(j=0; j<l-i-2; j+=2)
        {
            if(str[j]>str[j+2])
            {
                swap(str[j], str[j+2]);
            }
        }
    }
      cout<<str<<endl;
    return 0;
}

