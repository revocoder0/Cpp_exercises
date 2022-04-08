#include<iostream>
using namespace std;

int Menu(){

    int chooice;
    cout<<"_____ Cofe & Cold _____"<<endl<<endl;
    cout<<"1. Coffee "<<endl;
    cout<<"2. Tea "<<endl;
    cout<<"3. Orange  "<<endl;
    cout<<"4. Cold "<<endl;
    cout<<"5. Exit "<<endl;

    cin>>chooice;

    switch(chooice)
    {
        case 1:
            cout<<"Price --- $12" ;
        break;
        case 2:
            cout<<"Price --- $13" ;
        break;
        case 3:
            cout<<"Price --- $11" ;
        break;
        case 4:
            cout<<"Price --- $10" ;
        break;
        case 5:
            cout<<"Thanks..." ;
        break;
        default:
            cout<<"Please Select 1 to 5";
    }


    return 0;
}
