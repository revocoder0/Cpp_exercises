#include <iostream>
using namespace std;

int maing(){

    int rows;
    cout<< "Enter a number of row : ";
    cin>>rows;

    for(int i = rows; i>=1; i--){
        for (int j = 1 ; j<=1; j++){
            cout<<j<< " ";
        }
        cout<< "\n";
    }

    return 0;
}