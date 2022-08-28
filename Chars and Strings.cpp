#include <iostream>
using namespace std;

// cin -> stops execution whenever it receives tab,enter or a space characters.
//Just like array, chars also store data in container and at the end of the container if there is no value to store it stores some garbage value i.e char ch[10] = "Manoj", 5 places occupied by the letters in ch and rest are stored by garbage values.

//validPalindrome - Remove all unwanted characters, Convert to Lowercase, Check for Palindrome

//Convert to Lower Case for any char value
char toLowercase(char ch){
  if (ch >= 'a' && ch <= 'z'){
    return ch;
  }
  else{
    char temp = ch - 'A' + 'a';
    return temp;
  }
}

string replaceSubString(string s, string part){

  while(s.length()!=0 && s.find(part) < s.length()){

    s.erase(s.find(part),part.length());
  }
  return s;
}


string replaceSpaces(string str){
 
  string temp = "";

  for (int i = 0; i< str.length(); i++){
    if (str[i] == ' '){
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    }
    else
    {
      temp.push_back(str[i]);
    }
  }
  return temp;
}

bool isPalindrome(char ch[], int n){
  int s = 0;
  int e = n-1;

  while(s<=e){
    if(toLowercase ( ch[s] ) == toLowercase( ch[e] )){
      s++;
      e--;
      return 1;
    }
    else{
      return 0;
    }
  }
}

int length(char c[]){
  int count = 0;
  for (int i = 0; c[i] != '\0'; i++){
    count ++;
  }
  return count;
}

void reverse(char cs[], int n){
  int s = 0;
  int e = n-1;

  while(s<e){
    swap(cs[s++], cs[e--]);
  }
}

int main(){

  char ch[10];
  // int arr[10];
  // int n = sizeof(arr)/sizeof(arr[0]);
 
  cout << "Enter your chars "<< endl;
  cin>> ch;
  string str;
  //ch[2] = '\0'; //example of adding garbage value and check what it prints

  // cout << "Enter your arrs "<< endl;
  // for (int i = 0; i <n; i++){
  //   cin >> arr[i];
  //   break;
  // }
  cout << ch << endl;
  cout << length(ch) << endl;
  int n = length(ch);
  reverse(ch,n);
  cout << ch << endl;
  cout << isPalindrome(ch,n) << endl;
  cin>> str;
  cout << replaceSubString(str,"abc")<< endl;
 


 
}