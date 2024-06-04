#include <iostream>

class Subject {
public:
    virtual void maxmarks() = 0;  // Pure virtual function

};

class Maths : public Subject{
public:
    void maxmarks() {
        std::cout << "Maths max marks: 100" << std::endl;
    }
};

class History : public Subject {
public:
    void maxmarks() override {
        std::cout << "History max marks: 90" << std::endl;
    }
};

class English : public Subject {
public:
    void maxmarks() override {
        std::cout << "English max marks: 95" << std::endl;
    }
};

int main() {
  
    Subject* subjects[3] = {new Maths(), new History(), new English()};

    
    for (Subject* s : subjects) {
        if (dynamic_cast<History*>(s)) {
            s->maxmarks();
        }
    }
    return 0;
}
