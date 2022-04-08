#include <iostream>

using namespace std;

int main()
{
    int row, col;
    for(row=1;row<=7; row++){
        for(col = 1; col<=20; col++){
            if(col==1||col==6||col==10||col==16 || (row==7 && (col>1 && col<11 || col>16))
               || (row==1 && (col>6 && col<12 || col>14)) || (row==4 && col>16)
               || (row == 2 && (col == 12 || col==14)) || (row == 3 && col ==13))
               {
                cout<<"*";
               }


            else
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
