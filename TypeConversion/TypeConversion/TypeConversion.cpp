
/*
// primitive to user defined 1-using para constructor
#include<iostream>
using namespace std;
class MyClass
{
private:
	int num;
public:
	MyClass() {}
	MyClass(int num) { this->num = num; }
	void disp() {
		cout << num << endl;
	}

};
int main()
{
	MyClass m1;
	m1= 50;
	m1.disp();
}
*/

/*
//user defined to primitive- 2:overload =operator
#include<iostream>
using namespace std;
class Test {
private:
	int num;
public:
	void operator= (int k){
		this->num = k;
	}
	int getNum() {
		return num;
	}
};
int main() {
	Test t1;
	t1 = 30;
	cout << t1.getNum() << endl;
}
*/

/*
//user defined to primitive -casting function/conversion function
#include<iostream>
using namespace std;
class MyClass {
private:
	int num;
public:
	int getNum() {
		return num;
	}
	MyClass(int k) {
		this->num = k;
	}
	operator int() {
		return this->num;
	}
};
int main(){
	MyClass m1(50);
	int j = m1;
	cout << j << endl;
}
*/

/*
//UD to UD using operator overloading in destination
#include<iostream>
using namespace std;
class Test {

private:
	int a;
	int b;
public:
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	Test(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void operator=(Test t);

};

class MyClass {
private:
	int k;
public:
	int getK() {
		return k;
	}
	MyClass(int k) {
		this->k = k;
	}
	void operator=(Test t) {
		this->k = t.getA();
	}
};


int main() {
	MyClass m1(10);
	Test t1(50, 60);
	m1 = t1;
	cout << m1.getK() << endl;
}
*/


/*
//UD to UD using Conversion operator/casting method inside SRC
#include<iostream>
using namespace std;
class MyClass {
private:
	int k;
public:
	int getK() {
		return k;
	}
	MyClass(int k) {
		this->k = k;
	}
	
};
class Test {

private:
	int a;
	int b;
public:
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	Test(int a, int b) {
		this->a = a;
		this->b = b;
	}
	operator MyClass() {
		return MyClass(a);
	}
};

int main() {
	MyClass m1(10);
	Test t1(50, 60);
	m1 = t1;
	cout << m1.getK() << endl;
}

*/