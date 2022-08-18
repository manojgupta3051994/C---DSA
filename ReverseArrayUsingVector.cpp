#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> v){

  int start = 0;
  int end = v.size()-1;

  while (start<=end){
    swap(v[start], v[end]);
    start ++;
    end --;
  }
  return v;
}

void print(vector<int> v){
  for (int i = 0; i<v.size(); i++){
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){

  vector<int> s;
  s.push_back(11);
  s.push_back(7);
  s.push_back(3);
  s.push_back(12);
  s.push_back(4);
 
  print(s);
  vector<int> ans = reverse(s);
  print(ans);
}