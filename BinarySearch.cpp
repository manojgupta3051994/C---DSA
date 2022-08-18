#include <iostream>
using namespace std;

void printArray(int ar[], int siz){
  for (int i = 0; i <siz ; i++){
    cout << ar[i] << " " ;
  }
  cout << endl ;
  cout << "Printing Done" << endl ;
  }

void swapalter(int arr[], int size){
  for (int i = 0; i < size ; i+=2){
    if (i+1 < size){
      swap(arr[i],arr[i+1]);      
    }
  }
}

int findUnique(int a[], int s){
  int ask = 0;
  for(int i=0; i< s;i++){
    ask = ask^a[i];
  }
  return ask;
}

int findDuplicate(int z[], int s){
  int ast = 0;
  for (int i= 0; i < s; i++){
    ast = ast^z[i];
  }
  for (int i =1;i<s; i++){
    ast = ast*i;
  }
  return ast ;
}

int binarySearch(int arrr[], int sizes, int keys){

  int start = 0;
  int end = sizes -1;

  int mid = start + (end - start) / 2 ;

  while (start <= end){

    if (arrr[mid] == keys){
      return mid ;
    }
    if (keys > arrr[mid]){
      start = mid +1 ;
    }
    else{
      end = mid -1 ;
    }
    mid = start + (end - start) / 2 ;
  }
  return -1;
  }
 
 
 
 
 
#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int keys){

  int start = 0;
  int end = n-1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while (start <= end){

    if (arr[mid] == keys){
      ans = mid;
      end = mid -1;
    }
    if (keys > mid){
      start = mid +1;
    }
    else{
      end = mid -1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}

int lastOcc(int arr[], int n, int keys){

  int start = 0;
  int end = n-1;
  int mid = start + (end - start)/2;
  int ans = -1;

  while (start <= end){

    if (arr[mid] == keys){
      ans = mid;
      start = mid +1;
     
    }
    if (keys > mid){
      start = mid +1;
    }
    else{
      end = mid -1;
    }
    mid = start + (end - start)/2;
  }
  return ans;
}


int main(){
  int l[19] = {1,2,2,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7};
  cout << firstOcc(l,6,5)<< endl;
  cout << lastOcc(l,6,5)<< endl;
}


#include <iostream>
using namespace std;

int peakArray(int arr[], int n){

  int start = 0;
  int end = n-1;
  int mid = start + (end - start)/2;
  int ans;

  while(start<end){

    if (arr[mid] < arr[mid +1]){
      start = mid +1;
    }
    else {
      end = mid;
    }
    mid = start + (end - start)/2;
  }
  return start;
}

int main(){
  int ar[6] = {1,3,5,8,4,0};
  cout << peakArray(ar,6) << endl;
}


#include <iostream>
using namespace std;

int getPivot(int arr[], int n){

  int start = 0;
  int end = n-1;

  int mid = start +(end-start)/2;

  while (start< end){

    if(arr[mid]>arr[0]){
      start = mid +1;
    }
    else{
      end = mid;
    }
    mid = start +(end-start)/2;
  }
  return start;
}

int main(){
  int ar[6] = {3,8,10,17,18,1};
  cout << getPivot(ar,6) << endl;
}




#include<iostream>
using namespace std;


int sqrtInt(int n){

  int start = 0;
  int end = n;
  int mid = start + (end - start)/2;
 

  while(start<=end){
    int square = mid*mid;

    if (square == mid){
      return mid;
    }
    if (square < n){
      start = mid +1;
    }
    else{
      end = mid-1;
    }
    mid = start + (end - start)/2;
  }
  return mid;
}

double precision(int n, int precision, int tempsol){

  double factor = 1;
  double ans = tempsol;

  for (int i=0; i<precision; i++){

    factor = factor/10;

    for (double j=ans; j*j<n; j = j+factor){
      ans = j;
    }
  }
  return ans;
}

int main(){
  //cout << precision(36,2,5) << endl;
  cout << sqrtInt(64);
}