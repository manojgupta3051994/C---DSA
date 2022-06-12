#include <iostream>
using namespace std;

int main()
{

    // If else conditions 
    char x;
    cin >> x;

    if (islower(x)){
        cout << "Lower Case" << endl;
    }
    else if (isupper(x)){
        cout << "Upper Case" << endl;
    }
    else if (isdigit(x)){
        cout << "Number" << endl;
    }

    // While Loop 

    int n;
    cin >> n ;
    int i = 1;

    while(i < n){
        cout << i;
        i = i+1;
    }

    int n;
    cin >> n ;
    int i = 1;
    int sum = 0;
    while (i < n){
        sum = sum+i;
        i = i+1;
        cout << sum << "";
    }
    cout << endl;
    cout << sum << endl;

}