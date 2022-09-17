#include <iostream>
#include <string>
using namespace std;

//Recursion Day 4

void reverse(string str, int i, int j){

  cout << str << endl;

  if(i>j)
    return;

  swap(str[i],str[j]);
  i++;
  j--;

  reverse(str,i,j);
}

bool checkPalindrome(string str, int i, int j){

  if (i > j)
    return true;

  if (str[i] != str[j]){
    return false;
  }
  else{
    return checkPalindrome(str,i+1,j-1);
  }
}

int power(int a, int b){

  if( b == 0)
    return 1;

  if( b == 1)
    return a;

  int ans = power(a,b/2);

  if (b&1){
    // odd case
    return ans = a*ans*ans;
  }
  else{
    // even case
    return ans = ans*ans;
  }
}

int power1(int a, int b){

  int ans = 1;

  for (int i = 0; i< b; i++){
    ans = ans*a;
  }
  return ans;
}

void bubbleSortRecursion(int arr[], int n){

  if (n <= 0)
    return ;

  for (int i = 0; i<n; i++){
    if(arr[i] > arr[i+1]){
      swap(arr[i],arr[i+1]);
    }
  }
  bubbleSortRecursion(arr,n-1);
}

int main(){

  string name = "bookkoob";
  reverse(name,0,name.length()-1);
  int ans = checkPalindrome(name,0,name.length()-1);
  if (ans){
    cout << "Its a Palindrome" ;
  }
  else{
    cout << "Its not a Palindrome" ;
  }cout << endl;

  int a,b;
  cin >> a >> b;
  cout << power(a,b) << endl;
  cout << power1(a,b);
  cout << endl;

  int arr[] = {9,4,5,2,8,7,3};
  bubbleSortRecursion(arr,7);
  for (int i = 0; i< 7;i++){
    cout << arr[i] << " ";
  }
 


 
}