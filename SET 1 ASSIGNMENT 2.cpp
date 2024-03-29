#include <iostream>
using namespace std;

// Declaring Prototype
void displayAccountInfo(int);
void deposit(int);
void withdraw(int);

// Global Variable
int balance = 200;

int main ()
{
	char ans;
	displayAccountInfo(balance);
	
	do
	{
		deposit(500);
		withdraw(200);
		displayAccountInfo(balance);
		
		cout << "Do you want to perform another transaction? (Y/N): ";
		cin >> ans;
		cout << endl;
		cout << endl;
	}
	while (ans == 'y' || ans == 'Y');
	return 0; 
}

void displayAccountInfo(int a)
{
	string holder = "User 1";
	int acc_num = 1013202341;
		
	cout << "<<<<< My Account Overview >>>>>" << endl;
	cout << "Account Holder Name: " << holder << endl;
	cout << "Account Number: " << acc_num << endl;
	cout << "Balance: RM " << a << endl;
	cout << endl;
	cout << endl;
}
void deposit(int b)
{
	cout << "<<<<< Deposit Transaction >>>>>" << endl;
	balance += b;
	cout << "Deposit of RM " << b << " succesful"<< endl;
	cout << endl;
	cout << endl;
}

void withdraw(int c)
{
	cout << "<<<<< Deposit Transaction >>>>>" << endl;
	if (balance < c)
		cout << "Insufficient funds for withdrawal" << endl;
	else
	{
		balance -= c ;
		cout << "Withdrawal of RM " << c << " succesful"<< endl;
		cout << endl;
		cout << endl;
	}
}





