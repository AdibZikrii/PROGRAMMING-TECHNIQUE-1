#include <iostream>
using namespace std;

int main(){
	int h = 12, k = 7;
	bool m=false;
	cout << ((h == 12) || (h > k)) << endl;
	cout << ((h != 12) && (k = h)) << endl;
	cout << ((h = 10) && (k = m)) << endl;
	cout << ((h == 10) || !(h >= m)) << endl;
	cout << ((h != 10) && (k != m)) << endl;
	return 0;
}
