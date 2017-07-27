#include<iostream>
#include<cstring>
#include "Chap4.h"
#include<array>

int main() {
//	exercise1();
//	exercise2();
//	exercise3();
//	exercise4();
//	exercise5();
//	exercise6();
//	exercise7();
//	exercise8();
//	exercise9();
	exercise10();
}

//gets user input and prints out one letter grade less than input
int exercise1() {
	const int nameSize = 30;
	struct stu {
		char fName[nameSize];
		char lName[nameSize];
		char grade;
		int age;
	};

	using std::cout;
	using std::cin;
	using std::endl;

	stu s1;

	cout << "What is your first name?" << endl;
	cin.getline(s1.fName, nameSize);

	cout << "What is your last name?" << endl;
	cin.getline(s1.lName, nameSize);

	cout << "What letter grade do you deserve?" << endl;
	cin >> s1.grade;

	cout << "What is your age?" << endl;
	cin >> s1.age;

	s1.grade++;

	cout << "Name: " << s1.lName << ", " << s1.fName << endl;
	cout << "Grade: " << s1.grade << endl;
	cout << "Age: " << s1.age << endl;
	return 0;
}

//rewrite listing 4.4 *read more than one word with getline
int exercise2() {
	std::string name, dessert;
	std::cout << "Enter your name: \n";
	std::getline(std::cin, name);
	std::cout << "Enter your favorite dessert: \n";
	std::getline(std::cin, dessert);
	std::cout << "I have some favorite " << dessert << " for you " << name
			<< std::endl;
	return 0;
}

//gets name into char array then combines into string and prints it.
int exercise3() {
	using namespace std;
	const int aSize = 25;
	char fName[aSize];
	char lName[aSize];
	std::cout << "Enter first name: \n";
	std::cin >> fName;
	std::cout << "Enter last name: \n";
	std::cin >> lName;

	string s = "";
	s = lName;
	s += ", ";
	s += fName;
	cout << "Here's the information in a single string: " << s;

	return 0;
}

// gets first and last name into string then prints it.
int exercise4() {
	using namespace std;
	string firstName, lastName;
	std::cout << "Enter first name: \n";
	getline(cin, firstName);
	std::cout << "Enter last name: \n";
	getline(cin, lastName);

	string fullName = lastName + ", " + firstName;
	cout << "Here's the information in a single string: " << fullName;
	return 0;
}

int exercise5() {
	using namespace std;
	struct CandyBar {
		string name;
		float weight;
		int calories;
	};

	CandyBar snack { "Mocha Munch", 2.3, 350 };
	cout << snack.name << ", " << snack.weight << ", " << snack.calories
			<< endl;
	return 0;
}

//create array of 3 structures with initialized variables. then displays content of each structure.
int exercise6() {
	using namespace std;
	struct CandyBar {
		string name;
		float weight;
		int calories;
	};

	CandyBar candyType[] = { { "mint", 3.4, 2 }, { "choc", 5.6, 3 }, {
			"vanilla", 9.3, 5 } };
	cout << "Name: " << candyType[0].name << ", Weight: " << candyType[0].weight
			<< ", Calories: " << candyType[0].calories << endl;
	cout << "Name: " << candyType[1].name << ", Weight: " << candyType[1].weight
			<< ", Calories: " << candyType[1].calories << endl;
	cout << "Name: " << candyType[2].name << ", Weight: " << candyType[2].weight
			<< ", Calories: " << candyType[2].calories << endl;
	return 0;
}

// struct to hold pizza info
int exercise7() {
	using namespace std;
	struct Wingate {
		string name;
		float diameter;
		float weight;
	};

	Wingate comp1;
	cout << "Enter name of company.\n";
	getline(cin, comp1.name);
	cout << "Enter the diameter of the pizza.\n";
	cin >> comp1.diameter;
	cout << "Enter the weight of the pizze.\n";
	cin >> comp1.weight;

//display information for cmp1.
	cout << "Company Name: " << comp1.name << ", Diameter: " << comp1.diameter
			<< ", Weight: " << comp1.weight << endl;
	return 0;
}

//like 7--but yuse dienamick proegrahmyng to create structure.
int exercise8() {
	using namespace std;
	struct Wingate {
		string name;
		float diameter;
		float weight;
	};

	Wingate *wing = new Wingate; //allocates memory for the structure
	cout << "Enter the pizza diameter:" << endl;

//	getline(cin, (*wing).diameter);
	cin >> wing->diameter;

	cin.get(); //reads newline character (The ENTER KEY) cuz if not then the new line character or whitespace will be read into the company name.
	cout << "Enter the company name: \n";

//	getline(cin, (*wing).name); //Both struct access methods work.
	getline(cin, wing->name);   //This struct access method works too.

	cout << "Enter the weight: \n";
	cin >> wing->weight;

	//display information for cmp1.
	cout << "Company Name: " << wing->name << ", Diameter: " << wing->diameter
			<< ", Weight: " << wing->weight << endl;
	return 0;
}

//like 6 but use dynamic array
int exercise9() {
	using namespace std;
	struct CandyBar {
		string name;
		float weight;
		int calories;
	};

	CandyBar *candy = new CandyBar[3] { { "Snickers", 1.5, 120 }, {
			"Buttermilk", 5.0, 130 }, { "Butterfinger", 4.0, 210 } };

	cout << "Name: " << candy[0].name << ", Weight: " << candy[0].weight
			<< ", Calories: " << candy[0].calories << endl;
	cout << "Name: " << candy[1].name << ", Weight: " << candy[1].weight
			<< ", Calories: " << candy[1].calories << endl;
	cout << "Name: " << candy[2].name << ", Weight: " << candy[2].weight
			<< ", Calories: " << candy[2].calories << endl;

	delete candy;
	return 0;
}

//gets input for race times, displays average, use array
int exercise10() {
	using namespace std;
//	int numOfTimes;
//	cout<<"Enter the number of times to calculate.";
//	cin>>numOfTimes;
	double one, two, three;
	cout << "Time one: " << endl;
	cin >> one;

	cout << "Time two: " << endl;
	cin >> two;

	cout << "Time three: " << endl;
	cin >> three;

	double *raceTimes = new double[3];

	raceTimes[0] = one;
	raceTimes[1] = two;
	raceTimes[2] = three;

	double average = (raceTimes[0] + raceTimes[1] + raceTimes[2]) / 3;
	cout << "Race Times: " << raceTimes[0] <<", " << raceTimes[1] <<", "
			<< raceTimes[2] << endl;
	cout << "Average: " << average << endl;
	delete raceTimes;
	return 0;
}
