#include <iostream>
using namespace std;
void test(int&, int&, int, int&);

int main(){
	int a,b,c,d;
	a=3;
	b=4;
	c=20;
	d=78;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	test(a,b,c,d);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	d=a*b+c-d;
	
	test(a,b,c,d);
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}

void test(int& a, int& b, int c, int& d){
	cin>>a>>b>>c>>d;
	c=a*b+d-c;
	c=2*c;
	
}
