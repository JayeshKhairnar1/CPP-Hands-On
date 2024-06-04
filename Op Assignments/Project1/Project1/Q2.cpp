/*2) class sample
   {
	private:
		char ch;
	public:
		sample(char ch)
		{
			this->ch=ch;
		}
  };

given above class.

write a global function "display" which will access "ch" directly and display it.
call this function from main function.*/

#include<iostream>
using namespace std;
class sample
{
private:
	char ch;
public:
	sample(char ch)
	{
		this->ch = ch;
	}
	char getCh() { return ch; };
  friend void disp(sample& ref);
};
void disp(sample& ref) {
	cout << ref.ch << endl;
}
/*
int main() {
	sample s('j');
	disp(s);
	
}
*/