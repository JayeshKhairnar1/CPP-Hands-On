
/*write a program to convert minutes to hours.
(Use operator= for conversion.)*/
#include<iostream>
using namespace std;
class Hour
{
private:
	int hr;
public:
	Hour() {
		hr = 0;
	}
	Hour(int hr) {
		this->hr = hr;
	}
	void disp() {
		cout << hr << endl;
	}
	
};
class Minute
{
private:
	int mnt;
public:
	Minute() {
		mnt = 0;
	}
	Minute(int mnt) {
		this->mnt = mnt;
	}
	void disp() {
		cout << mnt << endl;
	}
	operator Hour(){
		return Hour(mnt/ 60);
		}
};
/*
int main() {
	Minute m(180);
	Hour h(4);
	 h= m;
	h.disp();
}
*/