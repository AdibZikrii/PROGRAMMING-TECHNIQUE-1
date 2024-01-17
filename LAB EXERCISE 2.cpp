//AHMAD ADIB ZIKRI BIN A.MAZLAM
//A23CS0205

#include <iostream>
#include <cmath>
using namespace std;
void xandy();

int main(){
	int x1=1, y1=3, x2=2, y2=6, x3=5, y3=4;
	double d1, d2, d3, AB, AC, BC;
	string A1, B1, C1, A2, B2, C2;
	
	
	d1=sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
	d2=sqrt((pow((x1-x3),2))+(pow((y1-y3),2)));
	d3=sqrt((pow((x3-x2),2))+(pow((y3-y2),2)));
	
	if(d1>0 && d2>0 && d3>0){
		AB=d1;
		AC=d2;
		BC=d3;
	
		
		
	}else{
		cout<<"NEVER GONNA HAPPEN";
		
	}
	if(x1!=0 && y1!=0){
		A1="A\t1\t3";
		A2="A(1,3), ";
		
	}if(x2!=0 && y2!=0){
		B1="B\t2\t6";
		B2="B(2,6), ";
		
	}if(x3!=0 && y3!=0){
		C1="C\t5\t4";
		C2="C(5,4) ";
	}
	
	
	cout<<A2<<B2<<C2<<endl;
	xandy();
	cout<<endl;
	cout<<A1<<endl<<B1<<endl<<C1<<endl<<endl;
	cout<<"AB="<<AB<<endl;
	cout<<"AC="<<AC<<endl;
	cout<<"BC="<<BC<<endl;
	
	return 0;
}

void xandy(){
	cout<<"\tx\ty"<<endl;
	
}
