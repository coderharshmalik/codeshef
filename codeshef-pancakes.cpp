#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    int s=t;
    while(t--){
        int n;
        cin>>n;
        cout<<n/2+1<<endl;  //   n/2 makes to half so the n/2+1 gives us the remaining as
                            //   the max cupcakes he can eat
    }
	return 0;
}
