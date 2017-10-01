/**********************************************
This is a Hello World application
designed by: Aaron Marples
grayeagle161@gmail.com
**********************************************/

#include <iostream>
#include <string>
int main()
{
using std::cin;
using std::cout;
using std::endl;

string name;

cout << "Please enter your name: ";
getline(cin,name);
cout << "\nHello, " << name << endl;
exit 0;
}
