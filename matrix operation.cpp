#include <iostream>
using namespace std;
const int rows=3;
const int cols=3;

int matrix(int [][3]);
int display(int [][3]);
int subs(int [][3], int [][3], int [][3]);

int main(){
	int array1[3][3];
	int array2[3][3];
	int substraction[3][3];
	
	matrix(array1);
	display(array1);
	matrix(array2);
	display(array2);
	subs(array1, array2, substraction);
	system("pause");
	
	cout<<"\nThe result of this matrix: "<<endl<<endl;
	display(substraction);
	
	return 0;
}
int matrix(int a[][3]){
	static int y=1;
	cout<<"\nThis is matrix "<<y<<endl;
	for(int i=0; i<rows; i++){
		for(int x=0; x<cols; x++){
			cout<<"Insert a number: ";
			cin>>a[i][x];
		}
	}
	cout<<endl;
	y++;
}

int display(int a[][3]){
	for(int i=0; i<rows; i++){
		for(int x=0; x<cols; x++){
			cout<<a[i][x]<<"\t";
		}
		cout<<endl;
	}
}

int subs(int a[][3], int b[][3], int c[][3]){
	for(int i=0; i<rows; i++){
		for(int x=0; x<cols; x++){
			c[i][x]=a[i][x]-b[i][x];
		}
	}
}







