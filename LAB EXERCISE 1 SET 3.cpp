#include <iostream>
#include <string>
using namespace std;

int main(){
	int a, num=1,product=1;
	string word;
	cout<<"Enter an integer number: ";
	cin>>a;
	while (a!=0){
		num=a%10;
		product=num*product;
		a=a/10;

	}
	cout<<endl;
	
	if (product%4==0 and product%5==0 and product%7==0){
		word="multiple of 4,5 and 7";
		
	}else if (product%4==0 and product%5==0){
		word="multiple of 4 and 5";
		
	}else if (product%4==0 and product%7==0){
		word="multiple of 4 and 7";
		
	}else if (product%5==0 and product%7==0){
		word="multiple of 5 and 7";
		
	}else if (product%7==0){
		word="multiple of 7";
		
	}else if (product%5==0){
		word="multiple of 5 ";
		
	}else if (product%4==0){
		word="multiple of 4";
	}
	
	cout<<product<<" is a "<<word<<endl;
	return 0;
}
