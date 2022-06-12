#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int b = 3;

  // Relational Operators

    bool first = (a==b);
    cout << first << endl;

    bool second = (a>b);
    cout << second << endl;

    bool third = (a<b);
    cout << third << endl;
    
    bool fourth = (a>=b);
    cout << fourth << endl;

    bool fifth = (a<=b);
    cout << fifth << endl;

    bool sixth = (a!=b);
    cout << sixth << endl;

  // Logical Operators - && - And , || - Or , ! - Not

  // Bitwise Operator AND - & , OR - | , NOT - ~ , XOR - ^

    cout << " a&b " << (a&b) << endl;
    cout << " a|b " << (a|b) << endl;
    cout << " ~a " << ~a << endl;
    cout << " a^b " << (a^b) << endl;
    
}