//4) write "Call By Address" program [ using pointer ]
#include<iostream>
using namespace std;
class Q4 {

public:
	
	void disp(int * ptr1, int *ptr2) {
		cout<<(*ptr1 + *ptr2);
	}
};
/*
int main() {
	Q4 obj;
	int a = 20;
	int b = 60;
	obj.disp(&a,&b);
}
*/