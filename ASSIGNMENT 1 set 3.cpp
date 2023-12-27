#include <iostream>
using namespace std;
int main(){
	int i=25,j;
	while(i>0){
		for(j=i; j>0; j-=5){
			if((i+j) % 4 != 0)  continue;
			cout<<"j = "<<--j
			<<"i = "<<i<<endl;
		}
		i/=2;
		
	}
	return 0;
}
