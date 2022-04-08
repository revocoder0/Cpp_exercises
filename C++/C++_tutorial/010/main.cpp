#include <iostream>

using namespace std;

int main()
{
    int row, col;

    for(row=1;row < 7; row++){
        for(col=1;col<=11; col++){
            if(col==1||col == 5||col == 7 || col == 11 || (row==1 && (col>1 && col<5 || col>7 &&col<11))
               || (row==3 && (col>1 && col<5 || col>7 && col<11)))
               {
                   cout<<"*";
               }else{
                    cout<<" ";
               }
        }
         cout<<endl;
    }

    return 0;
}
