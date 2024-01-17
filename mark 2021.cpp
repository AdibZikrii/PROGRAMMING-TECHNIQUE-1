//AHMAD ADIB ZIKRI BIN A.MAZLAM
//A23CS0205

#include <iostream>
using namespace std;

//Task 6
void getInput(int &, int &, int &);
void dispTier(int);
int calcAverage(int, float);
void dispSummary(float);

//Task 5
int main(){
	string name,hName,lName;
	int students=0,score1,score2,score3,totalAllMark,highest=0,lowest=10000,totalMark;
	do{
		cout<<"\n<<<<<<<<<<<<<< DATA >>>>>>>>>>>>>"<<endl;
		cout<<"Name   : ";
		getline(cin, name);
		
		if (name=="")
		break;
		else
		students++;
		
		//call Task 1
		getInput(score1, score2, score3);
		
		totalMark=((score1/100.00)*35)+((score2/100.0)*25)+((score3/100.0)*40);
		totalAllMark+=totalMark;
		//call Task 4
		dispSummary(totalMark);
		
		if(totalMark>highest){
			highest=totalMark;
			hName=name;
		}
		if(totalMark<lowest){
			lowest=totalMark;
			lName=name;
		}
		
		
		cin.ignore();
		
		
	}while(name!="");
	
	int average=calcAverage(students,totalAllMark);
	
	cout<<"\n<<<<<<< RESULTS ANALYSIS >>>>>>>>"<<endl;
	cout<<"Lowest mark : "<<lowest<<" ("<<lName<<") "<<endl;
	cout<<"Highest mark: "<<highest<<" ("<<hName<<") "<<endl;
	cout<<"Average for "<<students<<" students: "<<average<<endl;
	
	return 0;
	
}

//Task 1
void getInput(int &score1, int &score2, int &score3){
	cout<<"Q1 mark: ";
	cin>>score1;
	cout<<"Q2 mark: ";
	cin>>score2;
	cout<<"Q3 mark: ";
	cin>>score3;
}

//Task 2
void dispTier(int total){
	if (total<40){
		cout<<"Tier       : Tier 3";
	}else if (total<75){
		cout<<"Tier       : Tier 2";
	}else{
		cout<<"Tier       : Tier 1";
	}
	cout<<endl;
}

//Task 3
int calcAverage(int student, float totalallmark){
	int average;
	average=totalallmark/student;
	return average;
}

//Task 4
void dispSummary(float totalmark){
	cout<<"\n<<<<<<<<<<<<< SUMMARY >>>>>>>>>>>"<<endl;
	cout<<"Total marks: "<<totalmark<<endl;
	dispTier(totalmark);
	
}


