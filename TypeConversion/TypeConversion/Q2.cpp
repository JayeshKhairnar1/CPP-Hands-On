#include <iostream>
using namespace std;
class Number {
private:
    int num;

public:
    
    Number() : num(0) {}
    Number(int n) : num(n) {}

    void disp()  {
        std::cout << num << endl;
    }
    int operator-() const {
        return -num;
    }
    Number& operator+=(int k) {
        num = num + k;
        return *this;
    }
    bool operator !=(Number& ref) {
        return(num != ref.num);
    }
    bool operator <(Number& ref) {
        return (num <ref.num);
    }
    Number operator *(Number& ref) {
        return Number(num * ref.num);
    }
};

int main() {
    Number n1(20);
    int k = -n1; 
    cout << "Value of k: " << k << endl;
    n1 += 5; 
    n1.disp();

    Number n2(35);
    if (n1 != n2) { 
        cout << "n1 and n2 are not equal." << endl;
    }

    Number n3(12);
    if (n3 < n1) { 
        cout << "n3 is less than n1." << endl;
    }

    Number n4;
    n4 = n2 * n3; 
    n4.disp();

    return 0;
}
