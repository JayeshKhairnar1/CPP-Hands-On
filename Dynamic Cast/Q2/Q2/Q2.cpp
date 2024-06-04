#include<iostream>
using namespace std;
class Animal {
public:	virtual void makeSound(){}
};
class Cat: public Animal{
public:	void makeSound() { cout << "meow" << endl; }
};
class Dog : public Animal {
public:	void makeSound() { cout << "bark" << endl; }
};
class Tiger : public Animal {
public:	void makeSound() { cout << "Roar" << endl; }
	void hunt() { cout << "Tiger is hunting" << endl; }
};
void perform(Animal* ptr) {
	ptr->makeSound();
	Tiger * d = dynamic_cast<Tiger*>(ptr);
	if (d) {
		d->hunt();
	}
}
int main() {
	perform(new Cat);
	perform(new Tiger);
	perform(new Dog);
}