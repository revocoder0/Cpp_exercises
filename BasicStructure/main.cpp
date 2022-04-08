#include <iostream>

using namespace std;

int main()
{
    struct Cd_Title
    {
        char title[20];
        char artist[20];
        float price;
        char pur_date[11];
    }cdOne={"Hotel Califonia", "Egales" , 20, "4/3/2022"};
    cout<<"_________CD Information_______"<<endl<<endl;
    cout<<"Title\t\t :"<<cdOne.title<<endl;
    cout<<"Artist\t\t :"<<cdOne.artist<<endl;
    cout<<"Price\t\t :"<<cdOne.price<<endl;
    cout<<"Pur_Date\t :"<<cdOne.pur_date<<endl<<endl;
    return 0;
}
