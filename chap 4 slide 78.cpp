#include <iostream>
using namespace std;

int num(int x, int y);
int num(int x, int y){
	double result;
	result = x+y;
	return result;
}

int main(){
	int total,x=2,y=2;
	
	total= num(x,y);
	
	cout<<"hasil ialah "<<total;
	return 0;
}
