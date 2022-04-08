#include <iostream>

using namespace std;

int main()
{
    int num[]= {10,5,8,7,2,1};
    int temp;
    for(int i = 0; i<=5; i++){
        for(int j=i+1; j<=5; j++){
            if(num[i]>num[j]){
                temp= num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    cout<<"Before Sorting : 10,5,8,7,2,1"<<endl;
    cout<<"After Sorting : ";
    for(int k= 0; k<=5; k++){
        cout<<num[k]<<",";
    }
    cout<<endl;
    return 0;
}
