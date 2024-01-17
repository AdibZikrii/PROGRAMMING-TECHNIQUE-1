#include <iostream>
using namespace std;

int days(int, int, int);

int main(){
	int years, day, month, sum;
	
	cout<<"How many years: ";
	cin>>years;
	cout<<"How many month: ";
	cin>>month;
	cout<<"How many day: ";
	cin>>day;
	
	sum = days(years, month, day);
	
	cout<<"Total day is "<<sum<<endl;
	return 0;
}


int days(int a, int b, int c){
	a=a*365;
	b=b*30;
	c=c*7;
	return a+b+c;
}
