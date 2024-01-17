#include <iostream>
using namespace std;
const int MAX_BOOKS=20;

void displayMainMenu(int [],int);
void addBook(string [], string [], int [],int);
void displayLibrary(string [], string [], int [],int);
void searchByTitle(string [], string [], int [], int);

int main(){
	int choice;
	do{
		for(int i=0; i<MAX_BOOKS; i++){
			
		}
	}while (choice != 4);
	return 0;
}

void displayMainMenu(int choice[], int i){
	do{
		cout<<"\n<<<<<Library Management System>>>>>\n\n========================================"<<endl;
		cout<<"1. Add a Book\n2. Display Library\n3. Search by Title\n4. Quit"<<endl;
		cout<<"Enter your choice: ";
		cin>>choice[i];
		cout<<endl;
	}while(choice[i] != 1 || choice[i] != 2 || choice[i] !=3 || choice[i] != 4);
	
}

void addBook(string book[], string name[], int year[], int i){
	cout<<"\nEnter book title: ";
	cin>>book[i];
	cout<<"Enter author name: ";
	cin>>name[i];
	cout<<"Enter publication year: ";
	cin>>year[i];
	cout<<"\nBook added successfully!";
	
}

void displayLibrary(string book[], string name[], int year[], int i){
	cout<<"Library Contents:\n\n===================="<<endl;
	cout<<"Title: "<<book[i]<<endl;
	cout<<"Author: "<<name[i]<<endl;
	cout<<"Year : "<<year[i]<<endl<<endl;
	
}

void searchByTitle(string book[], string name[], int year[], int i){
	string a;
	cout<<"Enter the title to search: ";
	cin>>a;
	
	if(a==book[i-1]){
		cout<<"Book found:\n\n====================";
		cout<<"Title: "<<book[i-1]<<endl;
		cout<<"Author: "<<name[i-1]<<endl;
		cout<<"Year: "<<year[i-1]<<endl;
		
	}else{
		cout<<"Book not found."<<endl;
		
	}
	
}


















