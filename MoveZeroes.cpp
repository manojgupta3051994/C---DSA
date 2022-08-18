#include <iostream>
using namespace std;

void moveZeroes(int arr[], int n){
    int i = 0;
    for (int j = 0; j<n ; j++){
        if (arr[j] !=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

void print(int arr[], int n){
    for (int i = 0; i<n ; i++){
        cout << arr[i];
       
    }cout << endl;
}

int main(){
   
    int a[5] = {0,1,0,3,12};
    int b[6] = {12,0,4,0,5,0};
   
    moveZeroes(a,5);
    moveZeroes(b,6);
    print(a,5);
    print(b,6);
}
