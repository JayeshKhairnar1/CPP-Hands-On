#include<iostream>
using namespace std;
class Cricket { public: virtual void play() = 0; };
class Fifty :public Cricket{
public:
	void play() {
		cout << "Playing50-50" << endl;
}
};
class Test :public Cricket {
public:

	void play() {
		cout << "Playing Test" << endl;
	}
	void daywiseSummary() {
		cout << "Test Daywise Summary" << endl;
	}
};
class Twenty : public Cricket {
public:
	void play() {
		cout << "Playing 20-20" << endl;
	}
};
int main() {
	Cricket* arr[3] = { new Test,new Twenty,new Fifty };
	for (int i = 0;i <= 2;i++) {
		arr[i]->play();
		if (Test* t = dynamic_cast<Test*>(arr[i])) {
			t->daywiseSummary();
		}
	}
	

}