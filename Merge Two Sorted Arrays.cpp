#include <iostream>
using namespace std;

int merge(int a[],int n, int b[], int m, int c[]){
   
    int i = 0, j = 0, k =0;
   
    while (i<n && j<m){
        if (a[i]<b[j]){
            c[k] = a[i];
            k++;
            i++;
        }
        else{
            c[k] = b[j];
            k++;
            j++;
        }
    }
   
    while (i<n){
        c[k] = a[i];
        k++;
        i++;
    }
    while (j<m){
        c[k] = b[j];
        k++;
        j++;
    }
}

void print(int arr[], int n){
  for (int i = 0; i<n; i++){
    cout << arr[i];
  }cout << endl;
}

int main(){

  int a[6] = {1,3,4,6,8,9};
  int b[3] = {2,5,7};
  int c[9] = {0};

  merge(a,6,b,3,c);
  print(c,9);

 
}