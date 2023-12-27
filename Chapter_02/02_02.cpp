#include <iostream>

float mile_to_kilo(float mile);

int main(void){
	using namespace std;
	
	float mile;
	float kilometer;

	cout << "Input mile: ";

	cin >> mile;
	cout << mile_to_kilo(mile) << " kilometers" << endl;

	return 0;
}

float mile_to_kilo(float mile){
	return mile * 1.60934;
}