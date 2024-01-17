#include <iostream>
using namespace std;

int main(){
	int sum,i,x[10],highest=-1, lowest=9999999;
	for(i=0; i<10; i++){
		cout<<"PLEASE INSERT A NUMBER: ";
		cin>>x[i];
		
		
		if(x[i]>highest){
			highest=x[i];
		}
		
		if(x[i]<lowest){
			lowest=x[i];
		}
		
		
		sum+=x[i];
	}
	

	
	cout<<"\n\nTHE HIGHEST NUMBER IS "<<highest<<endl;
	cout<<"THE LOWEST NUMBER IS "<<lowest<<endl;
	cout<<"SUM OF THE NUMBER IS "<<sum<<endl;
	
	return 0;
}
