#include <iostream>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter Number: ";
    cin>>n;

    cout<<"The Possible of Factor Numbers of "<<n<< " are :";
    for(i=1; i<=n;i++){
        if(n%i==0)
            cout<<i<<" , ";
    }
    cout<<endl;
    return 0;
}
