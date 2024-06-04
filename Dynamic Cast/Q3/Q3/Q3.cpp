
#include<iostream>
using namespace std;
class Cricket {
public:
	virtual void play() = 0;

};
class Fifty :public Cricket {
public:
	void play() {
		cout << "Playing 50-50" << endl;
	}
};
class Test :public Cricket {
public:
	void play() {
		cout << "Playing TEST " << endl;
	}
	void daywiseSummary() {
		cout << "Day wise Summary" << endl;
	}
};
class Twenty :public Cricket {
public:
	void play() {
		cout << "Playing 20-20" << endl;
	}
};
void doIt(Cricket& ref) {
	ref.play();
	try {
		
			Test& ts = dynamic_cast<Test&> (ref);
			ts.daywiseSummary();

	}
	catch (bad_cast abc) {
		cout << "Exception Occured" << abc.what() << endl;
	}
}
int main() {
	Test t;
	Fifty f;
	Twenty tw;
	doIt(t);
	doIt(f);
	doIt(tw);
}