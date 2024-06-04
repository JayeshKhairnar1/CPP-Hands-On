/*1) class First
   {
      char str1[20];
   };
   class Second
   {
      char str2[20];
   };
write a friend function,
which will create a  new string containing str1,str2 and also display it.*/
#include <iostream>
#include <cstring>

class First; // Forward declaration

class Second
{
    
public:
    char str2[20];
    friend void combineAndDisplay(const First&, const Second&);
};

class First
{
    
public:
    char str1[20];
    friend void combineAndDisplay(const First&, const Second&);
};

void combineAndDisplay(const First& obj1, const Second& obj2)
{
    char combined[40]; 

  
    strcpy_s(combined, obj1.str1);

    
    strcat_s(combined, obj2.str2);

    std::cout << "Combined String: " << combined << std::endl;
}
/*
int main()
{
    First f;
    Second s;

    strcpy_s(f.str1, "Jayesh");
    strcpy_s(s.str2, "Khairnar");

    combineAndDisplay(f, s);

    return 0;
   
}
 */