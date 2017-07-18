#include<iostream>
//function prototypes
void exercise1();
void exercise2();
void exercise3();
void exercise3_1();
void exercise3_2();
void exercise4();
void exercise5(double celcius);
void exercise6(double lightYears);
void exercise7(int hour, int minute);


int main() {
//	exercise1();
//	exercise2();
//	exercise3();
//	exercise4();
	//-----5---------
//	double celsius;
//	std::cout<<"Please enter Celsius value: "<<std::endl;
//	std::cin>>celsius;
//	exercise5(celsius);
	//-----5------
	//-----6------
//	double lightYears;
//	std::cout<<"Enter the number of light years: "<<std::endl;
//	std::cin>>lightYears;
//	exercise6(lightYears);
	//-----7------
	int hour, minute;
	std::cout<<"Enter the number of hours: "<<std::endl;
	std::cin>>hour;
	std::cout<<"Enter the number of minutes: "<<std::endl;
	std::cin>>minute;
	exercise7(hour, minute);
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

// use three user defined functions including main to produce following output: ...
void exercise3() {
	//I forked this: simply created two extra methods and call them from here. When main calls this method, they are called afterwards.
	exercise3_1();
	exercise3_2();
	exercise3_1();
	exercise3_2();
}

void exercise3_1(){
//part of EXerc 3
	std::cout<<"Three blind mice."<<std::endl;
}

//part of EXerc 3
void exercise3_2(){
	std::cout<<"See how they run."<<std::endl;
}

//Ask for age then display in months.
void exercise4(){
	int age;
	std::cout<<"Enter your age:";
	std::cin>>age;
	std::cout<<"Your age in months is "<<age*12<<" months old :))"<<std::endl;
}

//ask for celsius then convert and display to fahrenheit
void exercise5(double celsius){
	std::cout<<celsius<<" degrees Celsius is "<<1.8*celsius+32<<" degrees Fahrenheit"<<std::endl;
}

//ask for light years then covert and display astronomical units
void exercise6(double lightYears){
	std::cout<<lightYears<<" light years = "<<lightYears*63240<<" astronomical units."<<std::endl;
}

//displays time from given arguments
void exercise7(int hour, int minute){
	std::cout<<"Time: "<<hour<<":"<<minute<<std::endl;

}

