#include <iostream>
#include <string>
using namespace std;

int main(){
	string from;
	cout<<"Where are you come from: ";
	cin>>from;
	
	if (from=="Terengganu" or from=="terengganu"){
		cout<<"\nYou're qualified";
		
	}else{
		cout<<"\nYou're not qualified";
		
	}
	return 0;
}
