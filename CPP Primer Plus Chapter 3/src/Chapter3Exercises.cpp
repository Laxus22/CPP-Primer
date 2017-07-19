#include<iostream>

void exercise1();
void exercise2();

int main() {
//	exercise1();
	exercise2();
}

//converts heigt inches to feet inches
void exercise1() {
	using namespace std;
	int heightInches;
	const int inchPerFeet = 12;
	std::cout << "Enter your height in inches: _";
	std::cin >> heightInches;
	cout << "Height: " << heightInches / inchPerFeet << " Feet "
			<< heightInches % inchPerFeet << " inches." << endl;
}

//calculate BMI
void exercise2() {
	using namespace std;
	int heightInFeet, heightInInches, weightPound;
	const int inchPerFoot = 12;
	const float inchToMeterFactor = 0.0254;
	const float poundToKiloFactor = 2.2;
	//gather info.
	cout << "Enter your height in feet. " << endl;
	cin >> heightInFeet;
	cout << "Enter your height in inches. " << endl;
	cin >> heightInInches;
	cout << "Enter your weight in pounds." << endl;
	cin >> weightPound;

	//conversion.
	int totalHeightInInches = heightInFeet * inchPerFoot + heightInInches;
	float heightInMeters=totalHeightInInches*inchToMeterFactor;
	float mass = weightPound/poundToKiloFactor;

	float BMI = mass/(heightInMeters*heightInMeters);

	cout<<BMI;
}
