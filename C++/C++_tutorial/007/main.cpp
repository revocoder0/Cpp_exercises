#include <iostream>

using namespace std;

void hollowDiamond(int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * n); j++) {
          if (i + j <= n - 1)
            cout << "*";
          else
            cout << " ";

          if ((i + n) <= j)
            cout << "*";
          else
            cout << " ";
        }
        cout << "\n";
    }
     for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * n); j++) {
          if (i >= j) // bottom left triangle
            cout << "*";
          else
            cout << " ";
          if (i >= ((2 * n) - 1) - j) // bottom right triangle
            cout << "*";
          else
            cout << " ";
        }
        cout << "\n";
      }
}

int main()
{
    int num;
    cout<<"Enter the number of lavels for Pattan : ";
    cin>>num;
    hollowDiamond(num);
    return 0;
}
