#include<iostream>
using namespace std;

int main(){
    int y;
    cout<<"Enter year to test Leap Year: ";
    cin>>y;

    /**if (y % 4 == 0){
        if (y % 100 == 0){
            if (y % 400 == 0){
                 cout << "Entered year is a leap year.";
            }else{
                 cout << "Entered year is not a leap year.";
            }
        }else{
            cout << "Entered year is a leap year.";
        }
     }else{
         cout << "Entered year is not a leap year.";
     }*/
    
    if(((y % 4 == 0) && (y%100==0)) || (y%100==0)){
        cout<<y <<" is a leap year.";
    }else{
        cout<<y << " is not a leap year.";
    }

    return 0;
}