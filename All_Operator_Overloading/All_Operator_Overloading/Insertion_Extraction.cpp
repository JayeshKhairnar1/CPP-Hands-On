#include<iostream>
using namespace std;
class Console {
private:
	int num;
public:
	int  getNum  () { 
		return num; 
	}

	Console() {
	}

	Console(int num) { 
		this->num = num; 
	}
	
	void setNum(int k) {
		cout << "Enter number:" << endl;
		//num = cin >> k;//operator>>(cin,k);
	}
	friend ostream& operator<<(ostream&, Console&);
};
ostream& operator<<(ostream& os, Console& ref) {
	cout << ref.num;
	return os;
}
