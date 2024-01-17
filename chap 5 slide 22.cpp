#include <iostream>
using namespace std;
const int MONTHS=12;

int main(){
	string months, word;
	int day[MONTHS]={31,28,31,30,31,30,31,31,30,31,30,31};
	
	for(int count=0; count<MONTHS; count++){
		switch(count+1){
			case 1: months="JANUARY";
					break;
			case 2: months="FEBRUARY";
					break;
			case 3: months="MARCH";
					break;
			case 4: months="APRIL";
					break;
			case 5: months="MAY";
					break;
			case 6: months="JUNE";
					break;
			case 7: months="JULY";
					break;
			case 8: months="AUGUST";
					break;
			case 9: months="SEPTEMBER";
					break;
			case 10: months="OCTOBER";
					break;
			case 11: months="NOVEMBER";
					break;
			default: months="DECEMBER";
					break;
			
		}
		if (count==1){
			word=" or 29 days";
			
		}else{
			word=" days";
			
		}
		cout<<"Month "<<months<<" has "<<day[count]<<word<<endl;
	} 
	return 0;
	
}
