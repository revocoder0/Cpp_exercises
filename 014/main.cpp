#include <iostream>

using namespace std;

int main()
{
    int arr[10] = {1,2};
    for(int i = 2; i<10 ; i++){
        arr[i] = arr[i-2]+arr[i-1];
    }
    for(int j= 0; j<10; j++){
        cout<< arr[j]<<endl;
    }
    return 0;
}
