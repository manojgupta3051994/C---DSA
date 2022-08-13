#include <iostream>
using namespace std;

int main() {

    int a,b;

    cout << "Enter number a " <<endl;
    cin >> a;

    cout << "Enter number b " <<endl;
    cin >> b;

    char op;

    cout << "Enter operation" <<endl;
    cin >> op;

    cout << endl;

    switch (op) {

        case '+': cout << a+b << endl;
        break;

        case '-': cout << a-b << endl;
        break;

        case '/': cout << a/b << endl;
        break;
        
        case '%': cout << a%b << endl;
        break;

        case '*': cout << a*b << endl;
        break;

        default : cout << "This is default case" << endl;
    }

    cout << endl;


}