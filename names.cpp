#include <iostream>
#include <string>
using namespace std;

int main() {
	string login;
	string first;
	string last;
	int number;
	
	cin >> first;
	cin >> last;
	cin >> number;
	
	login = last.substr(0,5) + first.at(0) + to_string(number % 100) ;

	cout << "Your login name: ";
	cout << login << endl;
	
	return 0;
}