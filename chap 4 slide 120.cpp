#include <iostream>
using namespace std;

void arrowheadup();
void arrowheaddown();
void arrowbody();

int main(){
	int size=5;
	arrowheadup();
	arrowbody();
	arrowheaddown();

	return 0;
	
}
void arrowheadup(){
	int i,j,size=7;
	for(i=1; i<size; i++){
		cout<<"\t\t\t\t";
		for(j=1; j<=i; j++){
			cout<<"**";
		}cout<<endl;
	}
	
	
}

void arrowbody(){
	int i,j;
	for(i=1; i<4; i++){
		cout<<"********************************************";
		for(j=1; j<=i; j++){
			cout<<"**";
		}cout<<endl;
	}
	
	for(i=2; i>=1; i--){
		cout<<"********************************************";
		for(j=1; j<=i; j++){
			cout<<"**";
		}cout<<endl;
	}
	

}

void arrowheaddown(){
	int i,j,size=7;
	for(i=6; i>=1; i--){
		cout<<"\t\t\t\t";
		for(j=1; j<=i; j++){
			cout<<"**";
		}cout<<endl;
		
	}
}








