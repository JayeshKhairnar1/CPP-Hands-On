#include<fstream>
#include<iostream>
using namespace std;
class Person
{
private:
	char name[20];
	int age;
public:
	Person(const char* name, int age)
	{
		strcpy_s(this->name, strlen(name) + 1, name);
		this->age = age;
	}
	Person()
	{
		strcpy_s(this->name, 2, "");
		this->age = 0;
	}

	void setName( char* name)
	{
		if (name != NULL)
		{
			delete[]name;
		}
		strcpy_s(this->name, strlen(name) + 1, name);
	}
	char* getName()
	{
		return name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return age;
	}
	
};

int main()
{
	Person p1("Amar", 23);

	//cout << p1 << endl;
	Person p2;
	cout << "Enter name and age for new object" << endl;
	//cin >> p2;
	//cout << p2 << endl;
}