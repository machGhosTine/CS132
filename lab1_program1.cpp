#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main()
{
    int i = 7, j = 3;
    float f1 = 7.0, f2 = 3.0;
    char c1 = '7', c2 = '3', c3 = 'A';
    bool flag = true;
    string s1 = "7", s2 = "3", s3 = "A";
    cout << "\n *****Properties of a variable*******\n";
    cout << "Name: i\tType: int\tValue:" << i <<"\tMemory Location: "
         << &i << endl;
    cout << "\n *****A. Integer Type*******\n";
    cout << "i+j = " << i+j << endl;
    cout << "i-j = " << i-j << endl;
    cout << "i*j = " << i*j << endl;
    cout << "i/j = " << i/j << endl;
    cout << "i%j = " << i%j << endl;
    cout << "\n *****B. ++ operator*******\n";
    cout << "i++ = " << i++ << endl;
    cout << "++i = " << ++i << endl;
    cout << "\n *****C. Float Type*******\n";
    cout << "f1+f2 = " << f1+f2 << endl;
    cout << "f1-f2 = " << f1-f2 << endl;
    cout << "f1*f2 = " << f1*f2 << endl;
    cout << "f1/f2 = " << f1/f2 << endl;
    cout << "\n *****D. Character Type*******\n";
    cout << "the integer value of char " << c1 << " = " << int(c1)<< endl;
    cout << "the integer value of char " << c2 << " = " << int(c2)<< endl;
    cout << "\n *****E. String Type*******\n";
    cout << "7+3 = " << s1+s2 << endl;
    cout << "\n *****F. Memory Allocation Type*******\n";
    cout << "memory allocation for integer type (short): "
         << sizeof(short) << " bytes\n";
    cout << "memory allocation for integer type: " 
         << sizeof(int)<< " bytes\n";
    cout << "memory allocation for Unsigned type: "
         << sizeof(unsigned) << " bytes\n";
    cout << "memory allocation for long integer type: "
         << sizeof(long int) << " bytes\n";
    cout << "memory allocation for long long integer type: "
         << sizeof(long long int) << " bytes\n";
    cout << "memory allocation for float type: " 
         << sizeof(float) << " bytes\n";
    cout << "memory allocation for float type (double): "
         << sizeof(double) << " bytes\n";
    cout << "memory allocation for char type: " << sizeof(char)
         << " bytes\n";
    cout << "memory allocation for boolean type: " << sizeof(bool)
         << " bytes\n";
    cout << "memory allocation for char A: " << sizeof(c3)
         << " bytes\n";
    cout << "memory allocation for string A: " << sizeof(s3)
         << " bytes\n";
    cout << "memory allocation for A " << sizeof("A") << " bytes\n";
    cout << "\n *****G. Constant Values*******\n";
    cout << "*** the actual value depends on the particular system and library implementation.***" << endl;
    cout << "Minimum value for an object of type int: " << INT_MIN  << endl;
    cout << "Maximum value for an object of type int: " << INT_MAX << endl;
    cout << "Maximum value for an object of type unsigned int: "
         << UINT_MAX << endl;
    cout << "Minimum value for an object of type long int: "
         << LONG_MIN << endl;
    cout << "Maximum value for an object of type long int: "
         << LONG_MAX << endl;
    cout << "Maximum value for an object of type unsigned long int: "
         << ULONG_MAX << endl;
    cout << "Minimum value for an object of type long long int: "
         << LLONG_MIN << endl;
    cout << "Maximum value for an object of type long long int: "
         << LLONG_MAX << endl;
    cout << "Maximum value for an object of type unsigned long long int: " 
         << ULLONG_MAX << endl;
    return 0;
}
