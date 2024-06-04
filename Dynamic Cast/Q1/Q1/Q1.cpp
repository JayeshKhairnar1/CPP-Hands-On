#include<iostream>
using namespace std;
class Weapon {
public:
	virtual void attack() = 0;
};
class Gun:public Weapon{
public:
	void attack() {
		cout << "attacking with:GUN "<< endl;
	}
};
class Sword :public Weapon {
public:
	void attack() {
		cout << "attacking with:SWORD" << endl;
	}
};
class Rifel :public Weapon {
public:
	void attack() {
		cout << "attacking with:RIFEL" << endl;
	}
	void chambering() {
		cout << "chambering RIFFEL"<<endl;
	}
};
int main(){
	
	/*Weapon* ptr[3] = { new Gun,new Rifel, new Sword };
	for (int i = 0;i <=3;i++) {
		ptr[i]->attack();
		Rifel* r=dynamic_cast<Rifel*>(ptr[i]);
		if (r) { r->chambering(); }
	}*/

	

	
}
