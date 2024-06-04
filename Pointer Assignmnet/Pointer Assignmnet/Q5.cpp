/*5) Given
	void disp(int,int*);
write a program to define above function and invoke it.*/
#include<iostream>
using namespace std;
/*
int main() {
	int num = 30;
	int* ptr = &num;
	void disp(int, int*);
	disp(20,ptr);
}
*/
void disp(int a, int* ptr) {
	cout << (a + *ptr) << endl;
}
