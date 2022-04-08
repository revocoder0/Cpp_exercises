#include <iostream>
using namespace std;

int main(){
    int square_area, square_side;

    cout<< "Enter the side of square : ";
    cin >> square_side;

    square_area =  square_side * square_side;
    cout<<"Square Area is " << square_area;

    return 0;
}