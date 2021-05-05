#include <iostream>
#include <string>

using namespace::std;

int main(){
	string firstname = "John";
	string lastname = "Doe";
	
	cout << firstname + " " + lastname << endl;
	
	//Alternative way of concatinating
	
	firstname = "John ";
	cout << firstname.append(lastname);
	
	return 0;
}
