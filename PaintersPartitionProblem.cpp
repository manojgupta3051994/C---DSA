#include <iostream>
using namespace std;

int c[] = {5, 5, 5, 5};

bool ProbableSoln(int arr[], int n, int k, int mid){

  int painters = 1;
  int boardsum = 0;

  for (int i=0; i < n; i++){
    if (boardsum + arr[i] <= mid){
      boardsum += arr[i];
    }
    else{
      painters ++;
      if (painters > k || arr[i] > mid){
        return false;
      }
      boardsum = arr[i];
    }
  }
  return true;
}

int paintersPartition(int arr[], int n, int k){

  int start = 0;
  int sum ;
  int ans = 0;
  for (int i =0; i <n; i++){
    sum += arr[i];
  }
  int end = sum;
  int mid = start + (end - start)/2;

  while (start <= end){

    if (ProbableSoln(arr,n,k,mid)){
      ans = mid;
      end = mid -1;      
    }
    else{
      start = mid + 1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
 
}


int main(){
  cout << paintersPartition(c, 4, 2) << endl;
}