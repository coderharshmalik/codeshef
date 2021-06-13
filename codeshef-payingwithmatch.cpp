//Playing with matches

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long a,b,s,c=0,m;
        cin>>a>>b;
        s=a+b;
        while(s>0)
        {
            m=s%10;
            s=s/10;
            if(m==0){
                c=c+6;
            }
            else if(m==1){
                c=c+2;
            }
            else if(m==2){
                c=c+5;
            }
            else if(m==3){
                c=c+5;
            }
            else if(m==4){
                c=c+4;
            }
            else if(m==5){
                c=c+5;
            }
            else if(m==6){
                c=c+6;
            }
            else if(m==7){
                c=c+3;
            }
            else if(m==8){
                c=c+7;
            }
            else if(m==9){
                c=c+6;
            }
        }
    cout<<c<<endl;
    }
    return 0;
}
