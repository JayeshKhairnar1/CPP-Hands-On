/*
4) Define a class , write two member functions 
	void disp1(){ //some code }
	void disp2(){ // some code }

	Try to call disp1   from    disp2.*/
#include<iostream>
using namespace std;
class Assign {

public:
	    void disp1() { cout << "inside disp1" << endl;
		disp2();
		}
private:
	void disp2() { cout << "inside disp2" << endl; }
};
/*
int main() {
	Assign a;
	a.disp1();
}
*/