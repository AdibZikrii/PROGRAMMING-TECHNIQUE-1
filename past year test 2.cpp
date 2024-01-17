//AHMAD ADIB ZIKRI BIN A.MAZLAM
//A23CS0205

#include <iostream>
using namespace std;

//Task 6
void readQty(int &, int &, int &);
void displayHighProd(double &, double &, double &);
double calcAvrg(int , double );
void summaryCom(double , double , double , double );

//Task 5
int main(){
	string name,highestAgent,lowestAgent,nameA,nameB,nameC;
	int A,B,C,numAgent=0;
	double comA, comB, comC,totalAllCom,totalComAgent,highest=0,lowest=10000000,hA=0,hB=0,hC=0;
	
	do{
		cout<<"\n----------------------AGENT------------------------"<<endl;
		cout<<"Agent Name: ";
		getline(cin, name);
		
		if(name=="")
		break;
		else
		numAgent++;
		
		readQty(A,B,C);
		comA=A*((150*0.025));
		comB=B*((300*0.05));
		comC=C*((450*0.1));
		totalAllCom=comA+comB+comC;
		
		summaryCom(comA, comB, comC, totalAllCom);
		
		if (totalAllCom<lowest){
			lowest=totalAllCom;
			lowestAgent=name;
		}
		if (totalAllCom>highest){
			highest=totalAllCom;
			highestAgent=name;
			
		}
		if (comA>hA){
			hA=comA;
			nameA=name;
			
		}
		if(comB>hB){
			hB=comB;
			nameB=name;
			
		}
		if(comC>hC){
			hC=comC;
			nameC=name;
			
		}
		
		totalComAgent+=totalAllCom;
		cin.ignore();
		
	}while(name!="");
	
	double average=calcAvrg(numAgent, totalComAgent);
	
	cout<<"\n------------------SALES ANALYSIS-------------------"<<endl;
	cout<<"Lowest commission for three products: RM "<<lowest<<" ("<<lowestAgent<<")"<<endl;
	cout<<"Highest commission for three products: RM "<<highest<<" ("<<highestAgent<<")"<<endl;
	cout<<"Highest commission for Product A: RM "<<hA<<" ("<<nameA<<")"<<endl;
	cout<<"Highest commission for Product B: RM "<<hB<<" ("<<nameB<<")"<<endl;
	cout<<"Highest commission for Product C: RM "<<hC<<" ("<<nameC<<")"<<endl;
	cout<<"Total of commission for "<<numAgent<<" agents: RM "<<totalComAgent<<endl;
	cout<<"Average commission for "<<numAgent<<" agents: RM "<<average<<endl;
	
	system("pause");
	return 0;
	
}

//Task 1
void readQty(int &a, int &b, int &c){
	do{
		cout<<"Product A: ";
		cin>>a;
	}
	while (a<0 || a>100);
	
	do{
		cout<<"Product B: ";
		cin>>b;
	}
	while (b<0 || b>100);
	
	do{
		cout<<"Product C: ";
		cin>>c;
	}
	while (c<0 || c>100);
}

//Task 2
void displayHighProd(double &a, double &b, double &c){
	if (a>b && a>c){
		cout<<"Highest commission - Product A: RM"<<a<<endl;
		
	}else if (b>a && b>c){
		cout<<"Highest commission - Product B: RM"<<b<<endl;
		
	}else if (c>a && c>b){
		cout<<"Highest commission - Product C: RM"<<c<<endl;
		
	}
	
}

//Task 3
double calcAvrg(int agent, double totalcomagent){
	double average;
	average=totalcomagent/agent;
	return average;
	
}

//Task 4
void summaryCom(double a, double b, double c, double totalcom){
	cout<<"-------------------SALES SUMMARY-------------------"<<endl;
	cout<<"Total of commission for three products: "<<totalcom<<endl;
	displayHighProd(a, b, c);
	
}


















