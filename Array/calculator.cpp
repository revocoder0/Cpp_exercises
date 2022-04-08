#include <iostream>
using namespace std;

int main()
{
    char ope;
    double numOne, numTwo;
    cout<<"Choose the Operator (+, - , * , /) : ";
    cin>>ope;

    cout<<"Enter two numbers one by one.";
    cin>>numOne>>numTwo;

        switch (ope)
        {
        case  '+':
            cout << numOne<<" + "<<numTwo<<" = "<<(numOne + numTwo);
            break;
        case  '-':
            cout << numOne<<" - "<<numTwo<<" = "<<(numOne - numTwo);
            break;
        case  '*':
            cout << numOne<<" * "<<numTwo<<" = "<<(numOne *numTwo);
            break;
        case  '/':
            if(numTwo != 0.0)
                cout << numOne <<" / "<<numTwo<<" = "<<(numOne/numTwo);
            else
                cout<<"Divide by Zero situation"; 
            break;
        
        default:
            cout << ope<< " is an invalid operator";
            break;
        }

    return 0;
}