#include <iostream>

using namespace std;

int main()
{
    //Literal is a program element that directly represents a value
    int integer = 985;
    int octal = 057;
    int hexadecimal = 0xff;
    float floatvalue = 12.346e2; //Here e2 exponent represents magnitude of the value as a power of 10
    bool boolvalue = 0B01001000;
    char character = 'A';
    string str = "StringLiteral";

    cout<<integer<<endl;
    cout<<octal<<endl;
    cout<<hexadecimal<<endl;
    cout<<floatvalue<<endl;
    cout<<boolvalue<<endl;
    cout<<character<<endl;
    cout<<str<<endl;
}