#include <iostream>
using namespace std;
int main(){
	const int NAMES = 3, SIZE = 10;
	char students[NAMES][SIZE] ={ "Ann", "Bill", "Cindy" };
	double scores[NAMES][SIZE] ={{88, 97, 79},
								{86, 91, 78},
								{82, 73, 77}};
								
	for (int i=0; i<NAMES; i++){
		cout<<scores[i][0]<<" ";
	}
	return 0;
}
