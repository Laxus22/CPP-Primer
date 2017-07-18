#include<iostream>
//function prototypes
void exercise1();
void exercise2();
void exercise3();
void exercise3_1();
void exercise3_2();
void exercise4();
double exercise5(double celcius);
//double exercise5_0();

int main() {
//	exercise1();
//	exercise2();
//	exercise3();
//	exercise4();
	//-----5---------
	double celsius;
	std::cout<<"Enter celsius: "<<std::endl;
	std::cin>>celsius;
	exercise5(celsius);
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

//
double exercise5(double celcius){

}

//double exercise5_0(){
//	double celcius;
//	std::cout<<"Enter the Celsius temp: "<<std::endl;
//	return std::cin>>celcius;
//}
