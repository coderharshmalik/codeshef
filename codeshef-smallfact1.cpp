//Small factorial

#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            b=b*i;
        }
        cout<<b<<endl;
    }
    return 0;
}
