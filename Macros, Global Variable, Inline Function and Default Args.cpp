#include <iostream>// preprocessor directive
using namespace std;
// Inline functions are used to reduce the function calls overhead. Works same as Macro where it does not makes any fucntion call, If your function body is of single line or upto 3 lines it can be used in Inline function. the function body gets placed everywhere its been called before code compilation. It does not occupies any extra memory usage and no function call overhead

// Macro is defined/created by #define keyword. It does not occupies any space as it is run before code compiling, following below example the value of PI i.e. 3.14 will be passed to each place where PI is called befor compiling code. Once defined it cannot be changed in runtime or so. Thus a Macro is a piece of code in a program that is replaced by value of macro

// Default Arguements

#define PI 3.14

// int getMax(int &a, int &b){
 
//   return (a>b) ? a : b;
// }

inline int getMax(int &a, int &b){
 
  return (a>b) ? a : b; // Tertiary operator
}

void print(int arr[], int n, int start = 0){ //Default Arguement - start
  for (int i =start; i < n; i++){
    cout << arr[i] << endl;
  }cout << endl;
}

int main(){

  int r = 5;
  double area = PI * r* r;
  cout << " Area is " << area << endl;

  int  j= 1, k = 2;
  int ans = 0;

  ans = getMax(j,k);
  cout << ans << endl;

  j = j+3;
  k = k+1;

  ans = getMax(j,k);
  cout << ans << endl << "----" << endl;

  int arr[6] = {1,2,3,4,5,6};
  print(arr,6);
 
 
 
}