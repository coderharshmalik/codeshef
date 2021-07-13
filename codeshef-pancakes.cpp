//Packaging Cupcakes 

#include<bits/stdc++.h>
using namespace std;
#define q int
int main()
{
    q tc;
    cin>>tc;
    while(tc--)
    {
        q n;
        cin>>n;
        q mx=0;
        for(q i=2;i<n;i++)
        {
            q r=n%i;
            mx=max(mx,r);
        }
        //........
    }
    return 0;
}