//Lucky four

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,b=0;
        cin>>n;
        while(n>0)
        {
            m=n%10;
            if(m==4)
            {
                b++;
            }           
            n=n/10;
        }
        cout<<b<<endl;
        
    }
    return 0;
}
