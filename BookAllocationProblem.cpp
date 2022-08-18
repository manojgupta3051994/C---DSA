#include <iostream>
using namespace std;

int b[] = {10,20,30,40};

bool ProbableSoln(int arr[],int n, int m, int mid){

  int studentcount = 1;
  int pagesum = 0;

  for (int i = 0; i< n; i++){
    if (pagesum + arr[i] <= mid){
      pagesum += arr[i];
    }
    else{
      studentcount ++;
      if (arr[i] > mid || studentcount > m){
        return false;
      }
      pagesum = arr[i];
    }
  }
  return true ;
}

int bookAllocate(int arr[], int n, int m){

  int start = 0;
  int sum ;
  int ans = 0;

  for (int i=0; i<n; i++){
    sum+=arr[i];
  }

  int end = sum;
  int mid = start + (end-start)/2;

  while (start <= end){
    if (ProbableSoln(arr,n,m,mid)){
      ans = mid;
      end = mid -1;
    }
    else{
      start = mid +1;
    }
    mid = start + (end-start)/2;
  }
  return ans;
}


int main(){
  cout << bookAllocate(b,4,2) << endl;
}