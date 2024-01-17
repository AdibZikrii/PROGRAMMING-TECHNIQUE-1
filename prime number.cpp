#include <iostream>
using namespace std;

int main(){
	int num[10]={2,3,6,17,21,38,42,53,61,74};
	
	cout<<"***** Prime Number *****"<<endl;
	
	for(int i=0; i<10; i++){
		cout<<num[i];
		
		if(num[i]%2==0 || num[i]%3==0 ){
			if(num[i]==2 || num[i]==3){
				cout<<" is a prime number"<<endl;
				
			}else{
				cout<<" is not a prime number"<<endl;
			}
		}else{
			cout<<" is a prime number"<<endl;
		}
	}
	return 0;
	
}
