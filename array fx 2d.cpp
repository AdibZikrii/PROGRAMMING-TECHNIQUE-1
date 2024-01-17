#include <iostream>
using namespace std;
const int row=3;
const int cols=4;

void display(int [][cols]);

int main(){
	int num[row][cols]={{4,8,12,16},
						{3,6,9,12},
						{2,4,6,8}};
	display(num);
	return 0;
	
}

void display(int num[][cols]){
	for (int x=0; x<row; x++){
		for (int i=0; i<cols; i++){
			cout<<num[x][i]<<" ";
		}
		cout<<endl;
	}
}
