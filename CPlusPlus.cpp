// C++ProjectGP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

//int main()
//{
//	string nameofuser;
//	cout << "Hi ! Please, input your name for us : ";
//	cin >> nameofuser;
//	struct Student {
//		string name;
//		string surname;
//		int age;
//		string group;
//	};
//	Student stu;
//	stu.name = "Camala";
//	stu.surname = "Harris";
//	stu.age = 92;
//	stu.group = "3b";
//	cout << nameofuser << "," << " " << "Here is breif info about student : " << "\n";
//	cout << stu.name << " " << stu.surname << " " << stu.age << " " << stu.group;
//}

int main()
{
	struct Person {
		string name;
		string surname;
		int age;
		int score;
	};
	typedef Person person;
	person prs;
	prs.name = "Gela";
	prs.surname = "Gelashvili";
	prs.age = 19;
	prs.score = 61;
	cout << "Here is the list of students : " << "\n";
	cout << prs.name << " " << prs.surname << " Age: " << prs.age << " Score: " << prs.score << "\n";
	if (prs.score >= 71) {
		cout << "Mrs/Mr " << prs.surname << " " << prs.name << " is in good student list, congrats !";
	}
	else {
		cout << "Mrs/Mr " << prs.surname << prs.name << " is not in good student list, try in next semester, GOOD LUCK !";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
