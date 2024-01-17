#include <iostream>
using namespace std;

int main(){
	double rainfall[12],totalRainfall,average,high=-1.00,low=999999999.00;
	int x;
	for(int i=1; i<13; i++){
		cout<<"Enter total rainfall for month "<<i<<" : ";
		cin>>rainfall[i];
		
		totalRainfall+=rainfall[i];
		
		if(rainfall[i]>high){
			high=rainfall[i];
			x=i;
		}
		
		if(rainfall[i]<low){
			low=rainfall[i];
			x=i;
		}
		
	}
	
	average=totalRainfall/12;
	
	cout<<"\n\nTotal rainfall through 12 months is "<<totalRainfall<<endl;
	cout<<"Average rainfall for every month is "<<average<<endl;
	cout<<"Highest amount of rainfall is on month "<<x<<" which is "<<high<<endl;
	cout<<"Lowest amount of rainfall is on month "<<x<<" which is "<<low<<endl;
	
	return 0;
}
