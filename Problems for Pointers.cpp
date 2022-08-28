#include <iostream>
using namespace std;

int main(){

  int first = 8; // storing 8 in first
  int second = 18; // storing 18 in second
  int *ptr = &second; // creating pointer ptr which stores address of second
  *ptr = 9; // updates *ptr with value = 9 i.e. updating value present in second. So new value will be 9

  cout << first << " " << second << endl;


  int first = 6; // storing 6 in first
  cout << first << endl;
  int *p = &first; // creating pointer p which stores address of first
  cout << p << endl;
  int *q = p; // creating pointer q which stores value in p i.e. address of first
  cout << *q << endl;
  (*q)++; //Incrementing value in p i.e. address of first
  cout << first << endl;

  int first = 8;
  int *p = &first;
  cout << (*p)++ << " ";
  cout << first << endl;

  int *p = 0; // p is null pointer
  int first = 10;
  *p = first; // initialization should be p = &first
  cout << *p << endl;

  int first = 8; // store 8 in first
  int second = 11; // store 11 in second
  int *third = &second; //pointer storing second address
  first = *third; // updating first with second's value
  *third = *third +2; //
  cout << first << " " << second << endl;


  float f = 12.5;
  float p = 21.5;
  float *ptr = &f;
  (*ptr)++;
  *ptr = p;
  cout << *ptr << " " << f << " " << p << endl;

  int arr[5]; // 4 byte * 5 values = 20
  int *ptr; // hexadecimal address of 8
  cout << sizeof(arr) << " " <<sizeof(ptr) << endl;

  int arr[] = {11,12,13,14};
  cout << *(arr) << " " << *(arr+1) << endl; // *(arr) will print first value of arr i.e. 11 and *(arr+1) will print second value viz 12.

  int arr[6] =  {11,12,31};
  cout << arr << " " << &arr << endl; // both will print Address

  int arr[6] = {11,21,31};
  cout << (arr + 1) << endl; // prints address

  int arr[6] = {11,21,31};
  int *p =   arr;
  cout << p[2] << endl; // print 2 value in array i.e. 31 as "arr" can also be used as address of array

  int arr[] = {11,12,13,14,15};
  cout << *(arr) << " " << *(arr+3); // prints 11 and 14

  int arr[] = {11,21,31,41};
  int *ptr = arr++; // this line will give Symbol table error as it is trying to change arr
  cout << *ptr << endl;

  char ch = 'a';
  char *ptr = &ch;
  ch++;
  cout << *ptr << endl; // will print b as a is incremented and ptr is pointing to the value at ch

  char arr[] = "abcd";
  char *p = &arr[0];
  cout << p << endl;  // prints whole char values

  char arr[] = "abcde";
  char *p = &arr[0];
  p++;
  cout << p << endl; // p will point to second blocl i.e. b and will print bcde

  char str[] = "gupta";
  char *p = str;
  cout << str[0] << " " <<p[0] << endl; // will print g both times

  int first = 110;
  int *p = &first;
  int **q = &p;
  int second = (**q)++ +9; // increment will happen after addition therefor second will have value 110+9 and after this first will be updated to 110+1 = 111
  cout << first <<" " << second << endl;

  int first = 100;
  int *p = &first;
  int **q = &p;
  int second = ++(**q);
  int *r = *q;
  ++(*r);
  cout << first << " " << second << endl;
   

 

 
}