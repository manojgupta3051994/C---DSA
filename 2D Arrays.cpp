// Mappint of values in 2D array = c*i+j, where c = total number of columns, i = row index, j = col index
//Initialisation of 2D array = int arr[row][col]
#include <iostream>
#include <vector>
using namespace std;

bool Search2DMatrix(int arr[][5], int row, int col, int target){

  int rowIndex = 0;
  int colIndex = col-1;

  while (rowIndex < row && colIndex >= 0){

    int element = arr[rowIndex][colIndex];

    if(element == target){
      return 1;
    }
    if (element < target){
      rowIndex ++;
    }
    else{
      colIndex --;
    }
  }
  return 0;
}


bool binarySearch2DMatrix(int arr[][4], int row, int col, int target){

  int start = 0;
  int end = row*col-1;
  int mid = start + (end-start)/2;

  while(start <= end){

    int element = arr[mid/col][mid%col];

    if (element == target){
      return 1;
    }

    if (element < target){
      start = mid +1;
    }
    else{
      end = mid -1;
    }
    mid = start + (end-start)/2;
   
  }
  return 0;

 
}



// int spiralWave(vector<vector<int>> arr){

//   vector<int> ans;
//   int row = arr.size();
//   int col = arr[0].size();

//   //int row = sizeof(arr)/sizeof(arr[0]);
//   //int col = sizeof(arr[0])/sizeof(arr[0][0]);

//   int count = 0;
//   int total = row*col;

//   //initialising indexes
//   int startingRow = 0;
//   int endingRow = row-1;
//   int startingCol = 0;
//   int endingCol = col-1;

//   while (count < total){

//     //printing starting row
//     for (int i = startingCol; count < total && i< endingCol; i++){
//       ans.push_back(arr[startingRow][i]);
//       count ++;
//     }
//     startingRow++;
 
//     //printing ending col
//     for (int i = startingRow;count < total &&  i<endingRow; i++){
//       ans.push_back(arr[i][endingRow]);
//       count ++;
//     }
//     endingCol--;
 
//     //printing ending row
//     for (int i = endingCol;count < total &&  i >=startingCol;i--){
//       ans.push_back(arr[endingRow][i]);
//       count ++;
//     }
//     endingRow--;
 
//     //printing starting column
//     for (int i = endingRow;count < total &&  i>=startingRow; i--){
//       ans.push_back(arr[i][startingCol]);
//       count ++;
//     }
//     startingCol++;

//   }

//   for (int i = 0; i < ans.size(); i++){
//     cout << ans[i] << " ";
//   }

// }


void wavePrint(int arr[][4], int row, int col){
  for (int j = 0; j < col; j++){
    if (j&1){

      for (int i = row-1; i>= 0; i--){
        cout << arr[i][j] << " ";
      }
    }
    else{
      for (int i = 0; i < row; i++){
        cout << arr[i][j] << " ";
      }
    }
  }
}

void largestSum(int arr[][4], int row, int col){

  int max = 0;
  int rowIndex = 0;
  for (int i = 0; i < row; i++){
    int sum = 0 ;
    for (int j = 0; j < col ; j++){
      sum += arr[i][j];
    }
    if(sum > max){
      max = sum;
      rowIndex = row;
    }
  }
  cout << max << endl;
 
}

void rowSum(int arr[][4], int row, int col){
  for (int i = 0; i <row; i++){
    int sum = 0;
    for (int j = 0; j < col; j++){
      sum += arr[i][j];
    }
    cout << sum << endl;
  }
 
}

bool isPresent(int arr[][4], int target, int row, int col){

  for(int i = 0; i < row; i++){
    for(int j = 0; j< col; j++){
      if(arr[i][j] == target){
        return 1;
      }
    }
  }
  return 0;
}

int main(){

  int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
  int arr1[5][5] = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,12,19},{10,13,14,17,24},{18,21,23,26,30}};
  //int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
  // row-wise input
  // for (int i = 0; i<3; i++){
  //   for (int j = 0; j <4; j++){
  //     cin >> arr[i][j];
  //   }
  // }1,2,3,4,5,6,7,8,9,10,11,12}

  // col-wise input
  // for (int i = 0; i<4; i++){
  //   for (int j = 0; j <3; j++){
  //     cin >> arr[j][i];
  //   }
  // }

  // //printing the 2D array
  for (int i = 0; i<3; i++){
    for (int j = 0; j <4; j++){
      cout << arr[i][j] << " ";
    }cout << endl;
  }

  int target ;
  cin >> target;

  if (isPresent(arr, target, 3,4)){
    cout << "Element Found " << endl;
  }
  else{
    cout << "Element Not Found " << endl;
  }
  //rowSum(arr,3,4);
  //largestSum(arr,3,4);
  //wavePrint(arr,3,4);
  //spiralWave(arr1);
  if(binarySearch2DMatrix(arr,3,4,target)){
    cout << "Binary Search Working " << " ";
  }
  else{
    cout << "Binary Search Not Working " << " ";
  }cout << endl;

  if (Search2DMatrix(arr1,5,5,target)){
    cout << "Search Working " << " ";
  }
  else{
    cout << "Search Failed " << " ";
  }

 
 
}
