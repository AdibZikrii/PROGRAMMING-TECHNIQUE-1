#include <iostream>
#include <cctype>
using namespace std;

int main(){
	char input[15];
	cout<<"Enter the name: ";
	cin>>input;
	for(int i=1; input[i] != '\0'; i+=2){
		input[i]=toupper(input[i]);
		
	}
	for(int j=0; input[j] != '\0'; j-=2){
		input[j]=toupper(input[j]);
	}
	cout<<"The name in upper class is: "<<input;
	return 0;
}
