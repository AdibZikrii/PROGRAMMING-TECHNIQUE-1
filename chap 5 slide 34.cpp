#include <iostream>
using namespace std;

int main(){
	int highest=0, count, lowest=999999, num[5];
	
	for(int i=0; i<5; i++){
		cout<<"Enter number: ";
		cin>>num[i];
		
		if(num[i]>highest){
			highest=num[i];
			
		}
		if (num[i]<lowest){
			lowest=num[i];
			
		}
	}
	cout<<"Highest number is "<<highest<<endl;
	cout<<"Lowest number is "<<lowest<<endl;
	return 0;
}
