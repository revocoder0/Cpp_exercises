#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
   int size;
   cout<< "Enter the table size: ";
   cin>>size;

   cout<<" ";

   int column = 1;
   while(column <=size){
    cout<<setw(4)<<column;
    column++;
   }
   cout<<endl;

   cout<<" +";
   column =1;
   while(column <=size){
    cout << "----";
    column++;
   }
   cout<<endl;

    int row = 1;
    while(row<=size){
        cout<<setw(2)<<row<<" |";
        int column =1;
        while(column <=size){
            int product = row * column;
            cout<< setw(4) << product;
            column++;
        }
        cout<<endl;
        row++;
    }

    return 0;
}
