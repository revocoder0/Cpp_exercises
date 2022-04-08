#include <iostream>

using namespace std;

int main()
{
   int ch, row,col;
   for(row = 1; row<=5; row++)
   {
       for(col=1; col<=29; col++)
       {
           if(col==1||col==5||col==7||col==11||col==15||col==19||col==29||
              row==2 && (col==25)||row == 1 && (col==25)||
              row==1&& (col>6 && col<12) || row==1 && (col>=13 && col<=17)||
              row ==3 &&(col>1 && col<5) || row ==3 && (col>=8 && col<=11) || row==3 && (col>=25 && col<=29)||
              row==5 && (col>=13 && col<=17)||row==5 && (col>19 && col<=23) || row==5 && (col>=25 && col<=29))
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
