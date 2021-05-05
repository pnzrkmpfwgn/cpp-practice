#include <iostream>
#include <string>
using namespace::std;

int main(){
	string myString = "Hello World";
	cout << myString[0] << endl;
	
	myString[0] = 'J';
	cout << myString;
	return 0;
}
