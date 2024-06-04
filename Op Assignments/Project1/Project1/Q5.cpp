/*5) Define a class with constructor and  member function

	create object, call member function
	now create a reference to that object, and using that reference try to call member function
*/
#include<iostream>
using namespace std;
class Jayesh {
private:
	int roll;

public:
	Jayesh(int roll) {
		this->roll = roll;
	}
	int getRoll() { return roll; }
	void disp() { cout << "Jayesh Khairnar" << endl; }
};
int main() {
	Jayesh obj(34);
	Jayesh& ref = obj;
	ref.disp();
}