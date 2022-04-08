#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter 1 to shutdown Your Computer: ";
    a1:
        int opt;
        cin>>opt;
        if(opt == 1){
            system("shutdown -s");
        }else{
            goto a1;
        }
    return 0;
}
