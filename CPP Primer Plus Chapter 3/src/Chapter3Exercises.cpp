#include<iostream>
#include "Chap3.h"

//void exercise1();
//void exercise2();
//void exercise3();
//void exercise4();
//void exercise5();
//void exercise6();
//void exercise7();

int main() {
//	exercise1();
//	exercise2();
//	exercise3();
//	exercise4();
//	exercise5();
//	exercise6();
	exercise7();
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
	float heightInMeters = totalHeightInInches * inchToMeterFactor;
	float mass = weightPound / poundToKiloFactor;

	float BMI = mass / (heightInMeters * heightInMeters);

	cout << BMI;
}

//displays coordinate in latitudes and seconds.
void exercise3() {
	using namespace std;

	int degrees, minutes, seconds;
	const int arcToMinute = 60; //60 seconds to 1minute
	const int arcToDegree = 60; //60 minute to 1 degree

	cout << "Enter a latitude in degrees, minutes, and seconds." << endl;
	cout << "Enter the degrees.";
	cin >> degrees;
	cout << "Enter the minute of arc.";
	cin >> minutes;
	cout << "Enter the seconds of arc." << endl;
	cin >> seconds;

	//conversion  n output
	cout << degrees << " degrees, " << minutes << " minutes, " << seconds
			<< " seconds = ";
	cout
			<< degrees
					+ ((minutes * arcToMinute + seconds)
							/ (double) (arcToMinute)) / arcToDegree;
	cout << " degrees." << endl;
}

//display seconds in days, hours, minutes, seconds.
void exercise4() {
	using namespace std;

	const int hoursInDay = 24, minuteInHour = 60, secondsInMinute = 60;
	long long inputSeconds;
	cout << "Enter the number of seconds: " << endl;
	cin >> inputSeconds;
	cout << inputSeconds << " seconds = ";
	int days = inputSeconds / (secondsInMinute * minuteInHour * hoursInDay);
	inputSeconds = inputSeconds % (secondsInMinute * minuteInHour * hoursInDay);
	int hours = inputSeconds / (secondsInMinute * minuteInHour);
	inputSeconds = inputSeconds % (secondsInMinute * minuteInHour);
	int minutes = inputSeconds / (secondsInMinute);
	int seconds = inputSeconds % secondsInMinute;

	cout << days << " days, " << hours << " hours, " << minutes << " minutes "
			<< seconds << " seconds.";
}

//display percent of world population that is US.
void exercise5() {
	using namespace std;
	long long worldPop, countryPop;
	cout << "Enter wold population: " << endl;
	cin >> worldPop;
	cout << "Enter country's population: " << endl;
	cin >> countryPop;
	cout << "The population of the entered nation is "
			<< ((long double) countryPop / worldPop) * 100
			<< "% of the world population.";
}

//display miles per gallon
void exercise6() {
	using namespace std;
	int miles, gallons;
//	double miPerGal;
	cout << "Enter miles: " << endl;
	cin >> miles;
	cout << "Enter gallons used: " << endl;
	cin >> gallons;

	cout << "This car gets " << (float) miles / gallons << " miles per gallons"
			<< endl;
}

//coverts euro style of gas consumption to us style
void exercise7() {
	using namespace std;
	float euroRate; //liters per 100 gallons
	float miPer100Kilom = 62.14;
	float litPerGal = 3.875;

	cout<<"Enter the Euro consumption rate: "<<endl;
	cin>>euroRate;

	//conversion
	double gallons = (euroRate*100)/litPerGal;
	cout<<gallons<<endl;
	cout<<miPer100Kilom/gallons;
}

