#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& nums, int k) {
     
    // just to practice the modulus approach
      int n = nums.size();
      vector<int> temp(n);
     
     
      for(int i =0;i<n;i++) {
       
        temp[(i+k)%n] = nums[i];
       
      }
     
     
      for(int i=0;i<nums.size();i++)
      {
        nums[i] = temp[i];
      }
     
    }

void rotateArray(int arr[], int n, int m){

  int temp[n];

  int k = 0;

  for (int i = m; i< n; i++){
    temp[k] = arr[i];
    k++;
  }

  for (int i = 0; i<m; i++){
    temp[k] = arr[i];
    k++;
  }

  for (int i = 0; i < n; i++){
    arr[i] = temp[i];
  }
 
}

void print(int arr[], int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }cout << endl;
}

int main(){

  int arr[] = {1,2,3,4,5,6,7};
  //int n = sizeof(arr) / sizeof(arr[0]);
  print(arr,7);
  rotateArray(arr,7,3);
  print(arr,7);
}