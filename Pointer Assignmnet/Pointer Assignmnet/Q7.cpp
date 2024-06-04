/*7) Given following functions:
	void disp1(int k);
	int disp2(char *);
	void disp3();
	double* disp4(char ch);

	declare "pointer to functions" for the above functions.*/
#include<iostream>
using namespace std;
void disp1(int k);
int disp2(char*);
void disp3();
double* disp4(char ch);
/*
int main(){
	
	void (*ptr1)(int);

	ptr1 = disp1;
	

	
	int (*ptr2) (char*);
	ptr2 = disp2;

	
	void (*ptr3) ();
	ptr3 = disp3;

	double* (*ptr4)(char);
	ptr4 = disp4;
	
	(*ptr1)(10);
	char ch1 = 'j';
	char* chptr = &ch1;
	(*ptr2)(chptr);

}
void disp1(int k) {
	cout << "in disp1" << endl;
}
*/