#include <iostream>
 using namespace std;
 // Function prototype
 void showDouble(int);

 int main(){
 int num;
 for (num = 0; num < 10; num++)
 showDouble(num);
 system("pause");
 return 0;
 }

 //Definition of function
 void showDouble(int value) {
 cout<<value <<"\t";
 cout << (value * 2)<< endl;
 } 
