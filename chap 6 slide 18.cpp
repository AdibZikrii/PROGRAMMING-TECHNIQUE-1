#include <iostream>
#include <iomanip>
using namespace std;
int main( )
{ double val = 10.345;
cout << setprecision(5) << val << endl; //(a)
cout << setprecision(4) << val << endl; //(b)
cout << setprecision(3) << val << endl; //(c)
cout << setprecision(2) << val << endl; //(d)
cout << setprecision(1) << val << endl; //(e)
cout << "Apa Khabar \n Semua /n" << endl; //(f)
cout << static_cast<int>(val)/2 << endl; //(g)
cout << setw(6) << val*5 << endl; //(h)
cout << showpoint << fixed << setw(8) << val << endl;//(i)
return 0;
}
