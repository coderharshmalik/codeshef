//Valid Triangles 

#include<bits/stdc++.h>
using namespace std;
#define a int 
int main()
{
    a tc;
    cin>>tc;
    while(tc--)
    {
        a x,y,z;
        cin>>x>>y>>z;
        int s=x+y+z;
        if(s==180)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;   
            }
    }
    return 0;
}