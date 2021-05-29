#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,b=0;
        cin>>n>>k;
        while(n--)
        {
            int a;
            cin>>a;
            if((a+k)%7==0)
            {
                b=b+1;
            }
            else
            continue;
        }
        cout<<b<<endl;
    }
    return 0;
}
