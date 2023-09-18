#include <iostream>
using namespace std;

class Node{
	public:

};

int main(){

	float monthsArray[6] = {100, 200, 300, 400, 500, 600};

	float total = monthsArray[0] + monthsArray[1] + \
		monthsArray[2] + monthsArray[3] + \
		monthsArray[4] + monthsArray[5];
	cout << total;
	return 0;
}
