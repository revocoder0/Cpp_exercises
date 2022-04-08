#include <iostream>

using namespace std;

int main()
{
    int twoDi[3][3];
    for(int i = 0; i<3; i++)
    {
        for(int j =0 ; j<3; j++)
        {
            twoDi[i][j] = i+1;//twoDi[i][j] = j+1;
        }
    }
    for(int k =0 ; k<3; k++)
    {
        int sum = 0;//အပေါင်းတန်ဖိုးတိကို မပြောင်းစီချင်ကေ 0 ထည့်ပါ။//အမြှောက်တန်ဖိုးမပြောင်းဇီချင်ကေ 1 ထည့်ပါ။
        for(int l = 0; l<3; l++)
            {
                cout<<twoDi[k][l]<<" ";
                sum =sum + twoDi[k][l];
            }
        cout<<" = "<<sum<<endl;

    }
    cout<<endl;
    return 0;
}
