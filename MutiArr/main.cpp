#include <iostream>

using namespace std;

int main()
{
    int myArr[3][4] ={{0,1,2,9}, {3,4,5,7},{6,7,8,3}};
    for(int i = 0; i<3 ; i++)
    {
        for(int j=0; j<4;j++)
        {
            cout<<myArr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    return 0;
}
