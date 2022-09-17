#include <iostream>
using namespace std;

// Recursion - Day 3

bool isSorted(int arr[], int n){

  if (n <= 1)
    return 1;

  if (arr[0] > arr[1]){
    return false;
  }
  else{
    bool ans = isSorted(arr + 1, n-1);
    return ans;
  }
}

int getSum(int arr[], int n){

  if (n == 0)
    return 0;

  if (n == 1)
    return arr[0];

  int rem = getSum(arr+1, n-1);
  int sum = arr[0] + rem;
  return sum;
}

bool isSortedNew(int arr[], int n){

  if (n <= 1)
    return 1;

  for (int i = 1; i < n ; i++){
    if (arr[i] > arr[i +1]){
      return 0;
    }
  }
  return 1;
}

void print(int arr[], int n){

  cout << "Size of the array is " << n << endl;

  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }cout << endl;
}

bool linearSearch(int arr[], int n, int key){

  print(arr,n);

  if (n == 0)
    return 0;

  if (arr[0] == key)
    return 1;

  bool ans = linearSearch(arr+1, n-1, key);
  return ans;
}

bool binarySearch(int arr[], int s, int e, int key){

  int mid = s + (e-s)/2;

  if(s>e)
    return 0;

  if (mid == key)
    return 1;

  if(mid < key){
    return binarySearch(arr,mid+1,e,key);
  }
  else{
    return binarySearch(arr,s,mid-1,key);
   
  }
 
}



int main(){

  int arr[5] = {1,2,9,4,5};
  int ans = isSortedNew(arr,5);
  if(ans){
    cout << "Array is sorted " << endl;
  }
  else{
    cout << "Array is not sorted " << endl;
  }
  cout << getSum(arr,5) << endl;
  int ans2 = linearSearch(arr,5,5);
  if (ans2){
    cout << "Present" << endl;
  }
  else{
    cout << "Absent" << endl;
  }
  int ans3 = binarySearch(arr,0,5,5);
  if(ans3){
    cout << "Found" << endl;
  }
  else{
    cout << "Not Found" << endl;
  }
}
