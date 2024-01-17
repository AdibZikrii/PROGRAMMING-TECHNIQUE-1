#include <iostream>
using namespace std;
void testDefaultParam(int , int=5, double=3.2);

int main(){
	testDefaultParam(3,4.5);
	return 0;
}
void testDefaultParam(int a, int b, double z){
	int u;
	a=a+static_cast<int>(2*b+z);
	u=a+b*z;
	cout<<"u = "<<a<<endl;
}


