#include<iostream>
using namespace std;
class Test{
private:
	int num;
public: 
	Test() {}
	Test(int num){ this->num = num; }
	int getNum() const { return num; }
	void setNum(int k){ 
		num = k;
		}
	Test operator+(Test &test){
		return Test(num + test.num);
	}
	Test operator-(Test& test) {
		return Test(num - test.num);
	}
	Test operator*(Test& test) {
		return Test(num * test.num);
	}
	Test operator/(Test& test) {
		return Test(num / test.num);
	}
};

