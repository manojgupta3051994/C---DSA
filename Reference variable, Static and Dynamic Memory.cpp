#include <iostream>
using namespace std;

// In Pointer * is value of variable and & is address locator of a variable

// Reference Variables -- Two variables i and j pointing to same address location of a value i.e 5. Same memory different names

int getSum(int *arr, int n){
 
  int sum = 0;
  for (int i = 0; i<n ; i++){
    sum += arr[i];
  }
  return sum;
}

void PassByValue(int n){
  n++; //This will create a copy of the variable n and wil update the n within this function and not the one in main function. Will take its own memory allocation
}

void PassByReference(int &j){
  j++; // This will create a reference to the same address location of the variable present in main function and can update it
}

int main(){

  // int i = 5;
  // int &j = i; // Creation of Referenced Variable
  // cout << i << endl;
  // i++;
  // cout << i << endl;
  // j++;
  // cout << i << endl;
  // cout << j << endl;

  // int n = 5;
  // cout << n << endl;
  // PassByValue(n);
  // cout << n << endl;
  // PassByReference(n);
  // cout << n << endl;

  int n;
  cin >> n;

  //int arr[n];// --> bad practice, never to take size of array on runtime. We should know the size on compile time. It will mostly end up crashing as size is taken on runtime. Whenever a program is initiated it comes with 2 memory. 1) Stack - small memory and 2) Heap - large memory. Stack memory comes as per the memory given at compile time and not on run time thus if large memory given on runtime will result in failure of program. So we use Heap Memory and to use heap memory we have to use "new" keyword for e.g. new char, new int. Thus Stack is Static Memory and Heap is Dynamic Memory. In Heap we cannot provide name as it returns address so we can use pointer to store address like char *ch = new char, int *i = new int. Suppose, we create int *i = new int; then pointer *i will be in stack memory of 8 byte and new int will be in heap memory will consume 4 byte totalling to 12 byte. In array's case int *arr = new int[5] - In this *arr will be in stack memory and will consume 8 byte, while int[5] will be 4*5 = 20 byte in Heap memory. In Static memory automatic memory release is working, while in Dynamic Memory manual memory release has to be done via "delete" keyword for int :- int *i = new int ; delete i. int *arr = new int[50] ; delete []arr

  int *arr = new int[n]; // Alternate way of creating array on heap memory

  for (int i =0; i<n; i++){
    cin >> arr[i];
  }

  int ans = getSum(arr,n);

  cout << "Answer is " <<ans << endl;

 
}