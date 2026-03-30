#include <iostream>
using  namespace std;
int main()
{

    int n;
    cout << "Checking whether a year is leap year or not. Please input a year: ";
    while (cin >> n) {
        if ((n % 4 == 0 ||n %400 == 0) && n %100 != 0)
            cout << n << " is a leap year." << endl;
        else
            cout << n << " is not a leap year." << endl;
    }

    return 0;
}
