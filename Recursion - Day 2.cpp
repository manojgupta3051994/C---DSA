#include <iostream>
using namespace std;

// Recursion Day 2. Base Case, Processing(Optional) and Recurrence Relation main components


void reachHome(int &src, int &dest){

  cout << "Source is " << src << " Destination is " << dest << endl;
  if(src == dest){
    cout << "Reached Destination " ;
    return ;
  }


  src++;

  reachHome(src,dest);
 
}

int climbingStairs(int n){

  if (n < 0)
    return 0;

  if (n == 0)
    return 1;

  int ans ;
  ans = climbingStairs(n-1) + climbingStairs(n-2);
  return ans;
}


int fib(int n){

  if (n == 0){
    return 0;
  }

  if (n == 1){
    return 1;
  }

  int ans = fib(n-1) + fib(n-2);
  return ans;
}

void sayDigits(string arr[], int n){

  if (n == 0)
    return ;

  int digit = n % 10;
  n = n/10;

  sayDigits(arr,n);

  cout << arr[digit] << endl;
   
}


int main(){

  int src = 0, dest =10;
  reachHome(src,dest);
  cout << endl;

  int n;
  cin >> n;
  // cout << fib(n);
  // cout << climbingStairs(n);

  string arr[10] = {"zero","one","two","three","four","five",
  "six","seven","eight","nine"};

  sayDigits(arr,n);

 
}