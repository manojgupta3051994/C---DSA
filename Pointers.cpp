#include <iostream>
using namespace std;


//Pointers with Arrays, Chars Functions etc

void print(int *ptr){
  cout << *ptr << endl;
}

void update (int *p){
  p = p+1;
}

int main(){

  int arr[] = {1,2,3,4,5,6,7,8,9};

  cout << "Address of first memmory of arr " << &arr << endl;
  cout << "Address of first memmory of arr " << &arr[0] << endl;
  cout << arr[0] << endl;
  cout << "Address of first memmory of arr " << arr << endl;
  cout << arr << endl;

  cout << *arr << endl;
  cout << *arr + 1 << endl;
  cout << (*arr) + 1 << endl;
  cout << *(arr+1) << endl;
  cout << arr[2] << endl;
  cout << *(arr+2) << endl;
  int *p = &arr[0];
  int *q = arr;
  cout << *p << endl;
  cout << *q << endl;

  // In Symbol Table changes cannot be done

  // int a[10];
  // a = a+1;
  // Above will give error as we are trying to make change in symbol table
 
  int ar[10];
  int *ptr = &arr[0];
  cout << ptr << endl;
  ptr = ptr +1;
  cout << ptr << endl;
  int value = 5;
  int *t = &value;
  print(t);
  cout << t << endl;
  update(t);
  print(t);
  cout << t << endl;
 
}