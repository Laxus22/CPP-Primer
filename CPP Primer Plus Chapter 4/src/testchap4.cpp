#include<iostream>

void a12();
void enumsTest();

//int main() {
////	char lunch[] = { "c" };
////	std::cout << lunch[2];
//
////	a12();
//	enumsTest();
//}

void a12() {
	using namespace std;
	float treacle[] { 1.1, 1.2, 3, 4, 5, 6, 7, 8, 9, 9.5 };
	float * tr = treacle;

	cout << "print0th" << endl;
	std::cout << tr[0] << endl;
	std::cout << *tr << std::endl;

	cout << "print 9th" << endl;
	cout << tr[9] << endl;
	cout << *(tr + 9) << endl;

	cout << "print tr" << endl;
	cout << &treacle << endl;
	std::cout << tr << endl;

//	cout<< "print using assignment of &treacle to pointer, should print address of first item"
//			<< endl;
//	float *fx = &treacle;
//	cout << fx << endl;

	cout << "print 0th's address" << endl;
	float * pd = &tr[0];
	cout << pd << endl;

//	string s="Boo";

}

//test enums
void enumsTest() {
	enum letter {
		A, B, C, D, E, F
	};
	letter stu;
	std::string grade;

	std::cout << "enter grade" << std::endl;
	std::cin >> grade;
	std::cout<<grade;
//	stu()
//	std::cout << letter(grade);
}
