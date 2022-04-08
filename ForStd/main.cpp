#include <iostream>

using namespace std;

int main()
{
    const int student = 5;
    const int subject = 6;
    int std[student][subject];
    int pass = 0, credit=0,dist =0;

    for(int i =0; i<student;i++)
    {
        cout<<"Student " <<i+1<<endl;
        for(int j = 0;j<subject;j++)
        {
            cout<<"Enter Marks for Subject "<<j+1<< " : ";
            cin>>std[i][j];
        }
        cout<<endl;
    }
    cout<<"Std No\tS1\tS2\tS3\tS4\tS5\tS6\tPass\tPass/Fail\tGrade\n";
    for(int m =0; m<student;m++)
    {
        pass = 0; credit=0;dist=0;
        cout<<m+1<<".\t";
        for(int n =0; n<subject; n++)
        {
            cout<<std[m][n]<<"\t";
            if(std[m][n]>=40 && std[m][n]>=65){pass+=1;}
            if(std[m][n] >=65 && std[m][n]>=80){pass+=1;credit+=1;}
            if(std[m][n] >= 80 && std[m][n]>=100){pass+=1;credit+=1;dist+=1;}
        }
        if(dist==6)
            cout<<"*P\t\tG1\n";
        else if(credit==6 && dist>=2)
            cout<<"P\t\tG2\n";
        else if(credit == 6 )
            cout<<"P\t\tG3\n";
        else if(pass==6)
            cout<<"P\t\tG4\n";
        else
            cout<<"F\t\tG5\n";

    }
    cout<<endl;
    return 0;
}
