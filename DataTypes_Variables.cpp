#include <iostream>
using namespace std;

int main(){
    int a = 123 ;
    cout << a << endl;
    
    char ch = 'm';
    cout << ch << endl ;

    float f = 1.3 ;
    cout << f << endl ;

    double d = 1.2 ;
    cout << d << endl ;

    int size = sizeof(d);
    cout << "Size of d is " << size << endl;

    // store only positive numbers

    unsigned int b = 112;
    cout << b << endl;

    unsigned int e = -112;
    cout << e << endl;

    // the reason for this long int o/p of e is beacuse the int datatype will store 1 as first value in byte

}