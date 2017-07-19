#include<iostream>

void exercise1();

int main() {
	exercise1();
}

//converts heigt inches to feet inches
void exercise1() {
	using namespace std;
	int heightInches;
	const int inchPerFeet = 12;
	std::cout << "Enter your height in inches: _" << std::endl;
	std::cin >> heightInches;
	cout<<"Height "<<heightInches/inchPerFeet<<" Feet "<<heightInches%inchPerFeet<<endl;
}
