#include <iostream>

using namespace std;

int main()
{
    int height;
    cout<<"Enter of the height: ";
    cin>>height;
    int row = 0;
    while(row < height){
        int count = 0;
        while(count < height - row){
            cout<<" ";
            count++;
        }
        count = 0;
        while(count <2*row +1){
            cout<< "*";
            count++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}
