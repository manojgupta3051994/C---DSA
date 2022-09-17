#include <iostream>
using namespace std;

//Recursion - What is Recursion - when a function calls itself that phenomenon is called Recursion. for example factorial of a number i.e. 5! or f(n) = 5! f(n) * 4!f(n-1)!.We need Base Case (return is mandatory) in Recursion and a Recurrence Relation mandatorily in any Recursion problem. Suppose if base case is not given the system won't know when to stop and will keep calling the function/process untill stack memory is overflowed i.e. segmentation fault error. In a function if you have recursion function later behind Base Case, Processing part it is called "Tail Recursion"  and if it comes above Processing part it is called "Head Recursion"

int factorial(int n){

  if(n ==0) // Base Case Mandatory
    return 1;

  return n*factorial(n-1);
}

int power(int n){

  if (n == 0 ) //Mandatory base case
    return 1;

  return 2*power(n-1);
}

int main(){

  int n;
  cin >> n;

  int ans = factorial(n);

  cout << ans << endl;

  int ans1 = power(n);

  cout << ans1 << endl;
}