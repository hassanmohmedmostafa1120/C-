#include <iostream>
#include "mystring.hpp"
using namespace std;
using namespace mystring;
int main()
{
    cout << "Program started!" << endl;
    char name[] = "hassAN";

    cout << toUpper(name);
     cout<<"\n";
    cout << toLower(name)<<endl;

    bool s1 = stringCompare("hello", "hello"); 
    bool s2 = stringCompare("hello", "world"); 
    cout<<s1<<endl;
    cout<<s2<<endl;



    char real[] = "Hello";

const char* copy = stringCopy(real);

cout << copy << '\n';

delete[] copy;
   
    return 0;
}