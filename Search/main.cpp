#include <iostream>

using namespace std;

int main()
{
    int num;
    char isFound;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Enter your Key : " ;
    cin>>num;
    for(int i = 0 ; i<10; i++){
        if(num ==arr[i]){
            isFound = 't';break;
        }else{
            isFound='f';
        }
    }
    if(isFound=='t'){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}
