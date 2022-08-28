#include <iostream>
using namespace std;

//Double Pointers

void update (int **p){
 
  // n = n+1;
  // *p = *p+1;
  **p = **p+1;
 
}

int main(){

  int n = 5;
  int *p = &n;
  int **p2 = &p;

  cout << "Printing value of n - " << n << endl;
  cout << "Printing Address of n - " << &n << endl;
  cout << "Printing value present in p i.e. address of n - "<< p << endl;
  cout << "Printing address of p - " << &p << endl;
  cout << "Printing value present in n - " << *p << endl;
  cout << "Printing Address of p - " << p2 << endl;
  cout << "Printing Address of p2 - " << &p2 << endl;
  cout << "Printing value in p2 i.e. address of n - " << *p2 << endl;
  cout << "Printing value of n - " << **p2 << endl;

  cout << endl << endl;
 
  cout << n << endl;
  cout << &n << endl;
  update(n);
  cout << n << endl;
  cout << &n << endl;

  cout << endl << endl;  

  cout << n << endl;
  cout << p << endl;
  cout << &p << endl;
  update(p);
  cout << n << endl;
  cout << p << endl;
  cout << &p << endl;

  cout << endl << endl;  

  cout << n << endl;
  cout << p2 << endl;
  cout << &p2 << endl;
  update(p2);
  cout << n << endl;
  cout << p2 << endl;
  cout << &p2 << endl;
 
}