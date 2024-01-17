#include <iostream>
using namespace std;

int main(){
	string level;
	float price=0, quantity;
	cout<<"Enter the quantity and level: ";
	cin>>quantity>>level;
	
	if (level=="Low"){
		if (quantity>=0 and quantity<15){
			price=quantity*0.3;
			
		}else if(quantity>=15 and quantity<=50){
			price=quantity*0.5;
			
		}else if (quantity>=51){
			price=quantity*0.7;
			
		}
	}else {
		if (quantity>0 and quantity<=10){
			price=quantity*0.2;
			
		}else if (quantity>10 and quantity<=20){
			price=quantity*0.3;
			
		}else if (quantity>20){
			price=quantity*0.6;
			
		}
	}
	cout<<"Price is RM"<<price;
	return 0;
}
