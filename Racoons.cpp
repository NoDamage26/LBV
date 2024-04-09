#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
    char c_string_1[] = "Hello";
    char c_string_2[] = "World";

    if(strcmp(c_string_2, c_string_1))
    {
        cout << "C-Strings are NOT Equal";
    }
    else
    {
        cout << "C-Strings are Equal";
    }
    
}