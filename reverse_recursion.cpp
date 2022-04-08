#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    static int temp, sum;
    if(n>0){
        temp =n%10;
        sum = sum*10 +temp;
        reverseNumber(n/10);
    }else{
        return sum;
    }
}
int main()
{
    int n, reverse;
    cout<<"Enter Number";
    cin>>n;

    reverse = reverseNumber(n);
    cout<< "Reverse Number is "<<reverse;
    return 0;
}