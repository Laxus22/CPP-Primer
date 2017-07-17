#include<iostream>
//function prototypes
void exercise1();
void exercise2();

int main() {
//	exercise1();
	exercise2();
}

//Exercise 1: displays name and address.
void exercise1() {
	using std::cout;
	using std::endl;
	cout << "Name: Mighty Man." << endl;
	cout << "Address: #1 Hero Academy.";
}

//asks for distance in furlongs and converts + displays in yards. 1 furlong = 25 yards.
void exercise2() {
	using std::cin;
	using std::endl;
	using std::cout;
	double furlong;
	std::cout << "Enter furlong." << endl;
	cin >> furlong;
	cout << furlong << " furlong is " << 3 * furlong << " yards." << endl;
}
