//Link List is palindrome

//Approach 1

bool checkpalindrome(vector<int> arr){

  int s = 0;
  int e = arr.size()-1;
  while(s<=e){
    if(arr[s]!=arr[e]){
      return false;
    }
    s++;
    e--;
   
  }
  return true;
}