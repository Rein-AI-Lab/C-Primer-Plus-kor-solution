#include <iostream>

using namespace std;

int main(void){
	int age;
	int monthage;

	cout << "Enter your age : ";
	cin >> age;

	monthage = age * 12; 

	cout << "Your age in month is " << monthage << endl;
	return 0;
}