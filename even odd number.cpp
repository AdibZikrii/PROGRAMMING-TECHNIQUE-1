//TASK: enter any number
//to check even or odd number
//AHMAD ADIB ZIKRI BIN A.MAZLAM
//A23CS0205

#include <iostream>
using namespace std;
int main(){
	int n;
	string word, i="yes";
	
	do{
		cout<<"PLEASE ENTER ANY NUMBER: ";
		cin>>n;
		cout<<endl;
		if (n%2==0){
			word=" is an even number";
		}else{
			word=" is an odd number";
		}
		cout<<n<<word<<endl;
		cout<<"\nContinue? (Y/N): ";
		cin>>i;
		cout<<endl;	
	} 
	
	while(i=="y" or i=="Y");
	
	return 0;
}




