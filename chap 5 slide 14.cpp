#include <iostream>
using namespace std;

int main(){
	const int ARRAY_SIZE = 3;
	int numbers[ARRAY_SIZE];
	
	for (int count = 0; count < 5; count++){
		numbers[count]=99;
		cout<<count<<"\t"<<numbers[count]<<"\t"<<endl;
	}
	return 0;
}
