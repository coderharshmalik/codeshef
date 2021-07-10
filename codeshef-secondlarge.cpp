<<<<<<< HEAD
//Second Largest

#include<bits/stdc++.h>
#include<climits>
=======
//Second largest

#include<iostream>
>>>>>>> c14a69c67b6f1c9073ed4b3e8e5e815ee3e394f1
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>a(3);
        int mx=INT_MIN;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
        }
        int min=*min_element(a.begin(),a.end());
        int max=*max_element(a.begin(),a.end());
        for(int i=0;i<3;i++)
        {
            if(a[i]==max)
            {
                a[i]=min;
                break;
            }
        }
        int min1=*max_element(a.begin(),a.end());
        cout<<min1<<endl;
    }
}
