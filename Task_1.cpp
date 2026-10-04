// example 01
#include<iostream>
using namespace std;

class bio {
	public:
		string name, school, college, course; 

		void intro() {
			cout << name << endl;
			cout << school << endl;
			cout << college << endl;
			cout << course << endl;
		}
};

int main() {
	bio b1 ;

	b1.name = "Athul R Nair";
	b1.school = "Cochin Refineries School";
	b1.college = "Jain University";
	b1.course = "BCA FullStack AI";

	b1.intro();

	return 0;
}


