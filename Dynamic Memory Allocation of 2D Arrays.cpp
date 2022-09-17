#include <iostream>
using namespace std;

//Dynamic Memory Allocation of 2D Arrays

// Normally we create a 2D array as - int arr[row][col]. Normally we create an array using stack-heap style = int *arr = new int[5];. So each *arr stores blocks of int in it. Hence for 2D array we ll need multiple *arr blocks therefore int **arr = new int *[n]; In this *arr will have multiple int * and we can create arrays to each pointer using a loop i.e. arr[i] = new int[n];

// Always remember to delete utilized Heap memory

int main(){

  // int n;
  // cin >> n;
  int row;
  cin >> row;
  int col;
  cin >> col;

  // Creating multiple new int block in *arr
  int **arr = new int *[row];

  // Creating array block in each arr
  for (int i =0; i<row; i++){
    arr[i] = new int[col];
  }

  // Taking input for 2D arrays

  for (int i = 0; i<row; i++){
    for (int j =0; j< col; j++){
      cin >> arr[i][j];
    }
  }

  // Printing the output

  for (int i = 0; i<row; i++){
    for (int j =0; j< col; j++){
      cout << arr[i][j] << " ";
    }cout << endl;  
  }

  // releasing memory in 2D array

  for (int i = 0; i< row ; i++){
    cout << "Deleting Memory" ;
    delete [] arr[i];
  }

  delete []arr;



 
}