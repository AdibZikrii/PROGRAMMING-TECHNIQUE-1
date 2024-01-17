#include <iostream>
using namespace std;

int displayAccountInfo(int x, int y, int z);
int deposit();
int withdraw();

int main(){
	int a=200, depo=500, draw=200,balance=500;
	char next='y';
	while (next=='y'|| next =='Y'){
		displayAccountInfo(a, depo, draw);
		deposit();
		withdraw();
		balance=a+depo-draw;
		displayAccountInfo(a, depo, draw);
		cout<<"Do you want to perform another transaction? (Y/N): ";
		cin>>next;
		cout<<endl<<endl;
		
	}
	return 0;
}

int displayAccountInfo(int a, int depo, int draw){
	int balance;
	cout<<"<<<<< My Accounts Overview >>>>>"<<endl;
	cout<<"Account Holder Name: User 1"<<endl;
	cout<<"Account Number: 1013202341"<<endl;
	cout<<"Balance: RM"<<balance<<endl<<endl;
	balance=a+depo-draw;
	return balance;
	
}

int deposit(){
	int depo=500;
	cout<<"<<<<< Deposit Transaction >>>>>"<<endl;
	cout<<"Deposit of RM "<<depo<<" successful."<<endl<<endl;
	return depo;
	
}
int withdraw(){
	int draw=200;
	cout<<"<<<<< Withdrawal Transaction >>>>>"<<endl;
	cout<<"Withdrawal of RM "<<draw<<" successful."<<endl<<endl;
	return draw;
}
