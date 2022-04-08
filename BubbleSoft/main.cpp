#include <iostream>

using namespace std;

int main()
{
    int num[] = {7,4,5,8,3,1};
    int temp;
    for(int i = 0; i<=4; i++){
        for(int j = 0; j<=4; j++){
            if(num[j] < num[j+1]){
                temp= num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    cout<< "Before Softing : 7,4,5,8,3,1 "<<endl;
    cout<<"After Softing:";
    for(int k = 0; k<=5; k++){
        cout<<num[k] <<",";
    }
    cout<<endl;
    return 0;
}
