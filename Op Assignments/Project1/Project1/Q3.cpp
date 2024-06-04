/*
class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
};		
	
write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) 
and check whether Modules are same or not.
call this "check" function from main function.	

*/
#include<iostream>
using namespace std;
class Module2;
class Module1
{
	int duration;
public:
	Module1(int k)
	{
		duration = k;
	}
	int getDuration1() { return duration; }
	void check(Module1, Module2);
};

class Module2
{
	int duration;
public:
	Module2(int k)
	{
		duration = k;
	}
	int getDuration2() { return duration; }
	void check(Module1, Module2);
};
void check(Module1 m1, Module2 m2) {
	if (m1.getDuration1() == m2.getDuration2()) { cout << "Same"; }
	else
		cout << "Diffrent";
}
/*
int main() {
	Module1 m1(200);
	Module2 m2(200);
	check(m1,m2);
}
*/