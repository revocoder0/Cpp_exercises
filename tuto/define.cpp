#include<iostream>
#define Rate 12

using  namespace std;
int main(){
    int feet, inches;

    cout<<"Enter Feet ot Compart Inches: ";
    cin >>feet;
    inches = feet * Rate;

    cout<< "Equivalent amout in Inches is :"<<inches;
    return 0;
}
