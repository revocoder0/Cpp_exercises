#include <iostream>

using namespace std;

int main()
{
    int i, j, k,n;
    cout<<"Enter Size to Print Heart : ";
    cin>>n;
    cout<<"\n\t";

    for(i = 3 ; i<=n ; i++){
        for(j=n; j >=i ; j--)
            cout<< " ";
        for(k=1;k<=(2*i-1); k++)
            cout<< char(3);
        for(j=i ; j <=(2*n-i); j++)
            cout<<" ";
        for(k=1;k<=(2*i-1); k++)
            cout<< char(3);
        cout<<"\n\t";
    }
    for(i=2*n; i>=1; i--){
        for(j=2*n; j>i;j--)
            cout<<" ";
        for(k=1; k<=(2*i-1); k++)
            cout<<char(3);
        cout<<"\n\t";
    }


    return 0;
}
