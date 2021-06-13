//Enormous Input Test 

#include<iostream>
using namespace std;
int main()
{
    int a,k,b=0;
    cin>>a>>k;
    while(a--)
    {
        long n;
        cin>>n;
        if(n%k==0)
        {
            b=b+1;
        }
        else{
            continue;
        }
    }
    cout<<b;
    return 0;
}