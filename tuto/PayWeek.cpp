#include <iostream>
using namespace std;

int main(){
    int workDays, workHours, payRate, weeklyPay;

    workDays = 6;
    cout <<"Enter is the hourly pay rate: ";
    cin>>payRate;

    cout<<"Enter the working hours: ";
    cin>>workHours;

    weeklyPay = workHours * workDays * payRate;
    cout<< "Weekly Pay is : " << weeklyPay<<endl;


    return 0;
}