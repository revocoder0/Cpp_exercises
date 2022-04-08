#include <iostream>

using namespace std;

int main()
{
    int *num;
    int numOfStd;

    cout<<"Enter Number of Student : ";
    cin>>numOfStd;
    num = new int[numOfStd];

    for(int i = 0; i < numOfStd ; i++)
    {
        cout<<"Enter Student # "<<i+1<< "Marks : ";
        cin>>*(num+i);
    }
    cout<<endl<<endl<<"_____The Students Marks______"<<endl<<endl;
    for(int j = 0; j<numOfStd; j++)
    {
        cout<<"Student # " <<j+1<< " Marks : "<< *(num+j) << " "<<endl;
    }
    return 0;
}
