#include <iostream>
#include <string>

using namespace::std;

int main(){
	/*
	string firstname;
	cout << "Type Your firstname: ";
	cin >> firstname;
	cout << "Your name :" << firstname << endl;
	*/
	//-------------------------------------------------------------------------------------------------------------------------------------
	//cin treats space as terminating character so even if you type your lastname using space your lastname will not be stored as an input.
	//-------------------------------------------------------------------------------------------------------------------------------------
	
	//-------------------------------------------------------------------------------------------------------------------------------------
	//However you can use getline in this case.
	//-------------------------------------------------------------------------------------------------------------------------------------
	string fullname;
	cout << "Type your full name: ";
	getline(cin,fullname);
	cout << "Your name is: " << fullname << endl;
	return 0;
}
