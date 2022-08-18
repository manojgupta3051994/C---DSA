#include <iostream>
using namespace std;

int c[] = {4,2,1,3,6};

bool PossibleSoln(int arr[], int n, int mid){

  int cowCount = 1;
  int lastPos = arr[0];

  for (int i=0; i< n; i++){
    if (arr[i] - lastPos > mid){
      cowCount ++;
      if (cowCount == n){
        return true;
      }
      lastPos = arr[i];
    }
  }
  return false ;
}

int aggressiveCows(int arr[], int n){
  int s = sizeof(arr)/sizeof(arr[0]);
  sort(arr, arr+s);
  int start = 0;
  int sum;
  int ans;

  for (int i=0; i<n; i++){
    sum += arr[i];
  }

  int end = sum;
  int mid = start + (end-start)/2;  

  while (start < end){

    if (PossibleSoln(arr,n,mid)){
      ans = mid;
      start = mid + 1;
    }
    else{
      end = mid -1;
    }
    int mid = start + (end-start)/2;
  }
  return ans;
}


int main(){

  cout << aggressiveCows(c,5,2) << endl;
}