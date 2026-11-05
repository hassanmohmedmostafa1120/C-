#include <iostream>
#include "mystring.hpp"

using namespace std;

namespace mystring{



char* toUpper(char str[]){
    int index = 0;
    while (str[index]!= '\0')
    {
        if(str[index] >= 'a' && str[index] <= 'z'){
            str[index] = str[index] - 32;
        
        }
        index++;
    }
    
    return str;
};


char* toLower(char str[]){
    int index = 0;
    while (str[index]!= '\0')
    {
        if(str[index] >= 'A' && str[index] <= 'Z'){
            str[index] = str[index] + 32;
        
        }
        index++;
    }
    
    return str;
};


bool stringCompare(char *str1, char *str2){
 int index = 0;
    while (str1[index]!= '\0')
    {
        if(str1[index] !=  str2[index]){
            
                   return false;

        }
            index++;

    }
   
    return true;
};


const char* stringCopy(char *str)
{

    int index = 0;
    while (str[index] != '\0')
    {
        index++;
    }
    char *ptr = new char[index+1];
    index = 0;
    while (str[index] != '\0')
    {
        ptr[index] = str[index];
        index++;
    }

    ptr[index] = '\0';

    return ptr;
};
}