#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[20]; //member variable for string input
public:
    void input() //member function
    {
        cout<<"Enter your string: ";
        cin >> str;
    }
    void display() //member function for output
    {
        cout<<"String: "<<str;
    }
    String operator+(String s) //overloading
    {
        String obj;
        strcat(str,s.str);
        strcpy(obj.str,str);
        return obj;
    }
};
int main()
{
    String str1,str2,str3; //creating three object
    str1.input();
    str2.input();
    str3=str1+str2;
    str3.display(); //displaying
}
