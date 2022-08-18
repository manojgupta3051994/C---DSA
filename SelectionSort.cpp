//Selection Sort - in this sorting technique you pick the first element from the array and compare it rest of the values and the one which is smaller will be replaced/swapped, Then this operation happens to the next value traversing thorugh the right " --> " direction in the array. Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.



#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i = 0;i<n; i++){
        cout <<arr[i] << " ";
    }
    cout << endl;
}

int selectionSort(int arr[], int n){
   
    for (int i = 0; i < n-1; i++){
       
        int minIndex = i;
       
        for (int j = i+1; j< n; j++){
           
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

int b[] = {6,2,8,4,10};

int main()
{
    printArray(b,5);
    selectionSort(b,5);
    printArray(b,5);
}