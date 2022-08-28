#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> v){
    int count = 0;
    int n = v.size();
   
    for (int i = 1; i< n; i++){
        if (v[i-1] > v[i]){
            count ++;
        }
    }
    if (v[n-1] > v[0]){
        count++;
       
    return count == 1;
    }
}

void print(int arr[], int n){
  for (int i = 0; i < n; i++){
    cout << arr[i] ;
  }cout << endl;
}



int main(){

  vector<int> a{3,4,5,1,2};
  if (check(a)){
    cout << "True" << endl;
  }
  else{
     cout << "False" << endl;
  }
 
}