#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
const int SIZE = 10;
char firstName[SIZE];
cout << "Enter your name: ";
cin >> setw(SIZE) >> firstName;
cout << firstName << endl;
return 0;
}
