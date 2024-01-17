#include <iostream>
using namespace std;

void welcome();

int main(){
	float a,price;
	welcome();
	cout<<"\nWhat is your choice?: ";
	cin>>a;
	
	if (a==1){
		price=5.5;
	}else if (a==2){
		price=6;
	}else if (a==3){
		price=1.5;
	}else{
		cout<<"Invalid choice";
		
	}
	cout<<"\nYour price is RM"<<price;
}

void welcome(){
	cout<<"Welcome to eat-eat online food"<<endl;
	cout<<"1.Nasi goreng - RM5.50\n2.Mee goreng - RM6.00\n3.Roti canai - RM1.50\n";
	
}
