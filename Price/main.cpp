#include <iostream>

using namespace std;

int main()
{
    int num, index=-1;
    const int size = 3;
    int item[] ={100,101,102};
    int prize[]= {1500,6000,8500};
    cout <<"Enter your number: ";
    cin>>num;
    for(int i =0; i<size; i++){
        if(num==item[i]){
            index=i;break;
        }
    }
    if(index >=0){
        cout<<"your price is : "<<prize[index]<<endl;
    }else{
        cout<<"your item no: is invalid!"<<endl;
    }
    return 0;
}
