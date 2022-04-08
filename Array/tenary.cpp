#include <iostream>
#include <string>
using namespace std;

int main(){
    short int mark;

    cout<<"Enter your mark : ";
    cin >> mark;

    string result = (mark >= 40) ? "passed" : "failed";
    cout << "You " << result << " the exam.";
   
    return 0;
}