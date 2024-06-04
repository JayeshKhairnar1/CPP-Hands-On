/*class First
{
	int a;
};
class Second
{
	public:
		void fun1(){}
		void fun2(){}
		void fun3(){}
};

Above code is incomplete.
Make sure that all the member functions of "Second" will access "a".


*/
#include <iostream>
using namespace std;

class First
{
	int a;
	friend class Second;
public:
	First(int a) { this->a = a; }
	int getA() {
		return a;
	}
};

class Second
{
public:
	void fun1(First& f) {
		cout << "fun1 accessing First::a: " << f.a << endl;
	}

	void fun2(First& f) {
		cout << "fun2 accessing First::a: " << f.a << endl;
	}

	void fun3(First& f) {
		cout << "fun3 accessing First::a: " << f.a << endl;
	}
};
/*
int main() {
	First f(10);
	Second s;

	s.fun1(f);
	s.fun2(f);
	s.fun3(f);

	return 0;
}
*/