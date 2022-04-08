#include <iostream>

using namespace std;

struct student
{
    char name[20];
    int age;
    char subject[20];
    char address[20];
};
int main()
{
    student *S;
    int n;
    S = new student[n];
    cout<<"Enter number of Student : ";
    cin >>n;

    for(int i = 0 ; i<n; i++)
    {
        cout<<"Enter Name: ";
        cin>>S[i].name;
        cout<<"Enter Age: ";
        cin>>S[i].age;
        cout<<"Enter Subject: ";
        cin>>S[i].subject;
        cout<<"Enter Address: ";
        cin>>S[i].address;
    }
    cout<<endl;
    for(int j = 0; j < n ; j++)
    {
        cout<<"Student " << j+1 << " of name is "<<S[j].name<<endl;
        cout<<"Student " << j+1 << " of age is "<<S[j].age<<endl;
        cout<<"Student " << j+1 << " of subject is "<<S[j].subject<<endl;
        cout<<"Student " << j+1 << " of address is "<<S[j].address<<endl;
    }
    cout<<endl;
    return 0;
}


