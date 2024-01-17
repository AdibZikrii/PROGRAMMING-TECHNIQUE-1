#include <iostream>
using namespace std;

int main(){
	const int  SIZE = 3;
	int values[SIZE],count;
	
	cout<<"I will store 5 numbers in a 3 element array"<<endl;
	for(count=0; count<SIZE; count++){
		values[count]=100;
		cout<<values <<" ";
		
	}
	return 0;
}
