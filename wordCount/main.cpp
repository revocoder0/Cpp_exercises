#include <iostream>
#include <conio.h>
using namespace std;
enum itsaWord {NO, YES};
int main()
{
    itsaWord isWord = NO;

    char ch = 'a';
    int wordcount =0;
    cout<<"Enter a phrase: "<<endl;

    do
    {
        ch = getche();
        if(ch == ' ' || ch=='\r')
        {
            if(isWord == YES)
            {
                wordcount++;
                isWord = NO;
            }
        }
        else
        {
            if(isWord == NO)
            {
                isWord = YES;
            }
        }
    }
    while(ch != '\r');

    cout<< "\n---Word Count is "<<wordcount<<"---\n";
    _getche();

    return 0;
}
