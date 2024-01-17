#include <iostream>
using namespace std;
void callFunction(int []);

int main(){
	int num[5]={1,2,3,4,5};
	callFunction(num);
	return 0;
}

void callFunction(int a[]){
	for (int i=0; i<5; i++){
		cout<<a[i]<<endl;
		
	}
}
