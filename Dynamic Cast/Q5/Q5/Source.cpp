#include<iostream>
using namespace std;
class StorageDevice{
public:
	virtual void store() = 0;
};
class HardDisk :public StorageDevice {
public:
	void store() {
		cout << "Storing in:Hard Disk " << endl;
	}
};
class PenDrive :public StorageDevice {
public:
	void store() {
		cout << "Storing in: Pendrive " << endl;
	}
};
class CD :public StorageDevice {
public:
	void store() {
		cout << "Storing in: CD" << endl;
	}
};
void perform(StorageDevice& ref) {
	try {
		PenDrive pdRef = dynamic_cast<PenDrive&> (ref);
		ref.store();
	}
	catch (bad_cast& bc) {
		cout << "Cant Store if Sorage Type is not PD\t" << bc.what() << endl;
	}
}
int main() {
	PenDrive p;
	CD c;
	HardDisk h;
	perform(p);
	perform(c);
	perform(h);
}