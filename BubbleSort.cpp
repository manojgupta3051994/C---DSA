// Stores largest element first - opposite of what selection sort does
#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0;i<n; i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
}

int bubbleSort(int arr[], int n){
   
    for (int i=0; i<n-1; i++){
        bool swapped = false;
        for (int j = 0; j<n-1; j++){
           
            if (arr[j]> arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;
    }
}


int b[] = {6,2,8,4,10,7,5,16,20};

int main()
{
    printArray(b,9);
    bubbleSort(b,9);
    printArray(b,9);
}