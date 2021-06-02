//ATM

#include<iostream>
using namespace std;
int main()
{
    int x;
    float y;
    cin>>x>>y;

    // in this program orecision function is not working
    
    if(x%5==0)
    {
        if(x<y)
        {
            cout<<y-(0.50+x);
        }
    }
    else
    {
        cout<<y;
    }

    return 0;
}
