#include<iostream>
#include"Date.h"

using namespace std;
using namespace IvoryYang;

int main()
{
    // Default constructor: Current date
    Date d1;
    d1.display();
    cout << "\n\n";

    // Constructor: Valid date
    Date testd2(9, 27, 1996);
    testd2.display();
    cout << "\n\n";

    // Constructor:  Illegal date, month too small
    Date testd3(-1, 1, 2022);
    testd3.display();
    cout << "\n\n";

    // Constructor:  Illegal date, month too large
    Date testd4(13, 1, 2022);
    testd4.display();
    cout << "\n\n";

    // Constructor:  Illegal date, year too small
    Date testd5(1, 1, 0);
    testd5.display();
    cout << "\n\n";

    // Constructor:  Illegal date, day too large
    Date testd6(6, 31, 2022);
    testd6.display();
    cout << "\n\n";
}