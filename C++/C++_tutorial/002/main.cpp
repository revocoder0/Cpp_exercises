#include <iostream>

using namespace std;

int main()
{
    for(int rows=1;rows<=5;rows++)
	{
		for(int num1=1;num1<=5-rows;num1++)
		{
			cout<<" 1 ";
		}
		for(int star=rows;star<=rows;star++)
		{
			cout<<"*";
		}
		for(int num2=1;num2<=rows;num2++)
		{
			cout<<" 1 ";
		}
		cout<<endl;
	}
    return 0;
}
