#include <iostream>
using namespace std;

int main()
{
  // Star Pattern
  int n ;
  cin >> n;
  int i = 1;
  while (i <=n){
    int j = 1;
    while (j <= n){
      cout << "*";
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }

  // Number Pattern

  int n ;
  cin >> n;
  int i = 1;
  while (i <=n){
    int j = 1;
    while (j <= n){
      cout << i;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }

  int n ;
  cin >> n;
  int i = 1;
  while (i <=n){
    int j = 1;
    while (j <= n){
      cout << j;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }

  // Reverse Number

    int n ;
  cin >> n;
  int i = 1;
  while (i <=n){
    int j = 1;
    while (j <= n){
      cout << n-j+1;
      j=j+1;
    }
    cout << endl;
    i = i+1;
  }

  // Continuos numbers

    int n ;
  cin >> n;
  int i = 1;
  int count = 1;
  while (i <=n){
    int j = 1;
    while (j <= n){
      cout << count << " ";
      count = count +1;
      j=j+1;
    }
    cout << endl;
    i = i+1;

    // Star Triangle 

      int n ;
  cin >> n;
  int row = 1;
  while (row <= n){
    
    int col = 1;
    while (col<=row){
      cout << "*";
      col = col+1;
    }
    cout << endl;
    row = row+1;
  }

  //Number Triangle

    int n ;
  cin >> n;
  int row = 1;
  while (row <= n){
    
    int col = 1;
    while (col<=row){
      cout << row;
      col = col+1;
    }
    cout << endl;
    row = row+1;
  }

  // Continuous Number Triangle

    int n ;
  cin >> n;
  int row = 1;
  int count = 1;
  while (row <= n){
    int col = 1;
    while (col<=row){
      cout << count << " ";
      count = count+1;
      col = col+1;
    }
    cout << endl;
    row = row+1;
  }

  // Number Triangle

    int n ;
  cin >> n;
  int row = 1;
  while(row <= n){
    int col = 1;
    while(col <= row){
      cout << row+col-1 << " ";
      col = col+1;
        
    }
    cout << endl;
    row = row+1;
  }

  // Reverse Number Triangle

    int n ;
  cin >> n;
  int row = 1;
  while(row <= n){
    int col = 1;
    while(col <= row){
      cout << row-col+1 << " ";
      col = col+1;
        
    }
    cout << endl;
    row = row+1;
  }

  // ABC Square Matrix

    int n ;
  cin >> n;
  int i = 1;
  while (i <= n){
    int j = 1;
    while (j <= n){
      char ch = 'A'+i-1;
      cout << ch;
      j = j+1;
    }
    cout << endl;
    i = i+1;
  }

  // ABC Square Matrix horizontal

    int n ;
  cin >> n;
  int i = 1;
  while (i <= n){
    int j = 1;
    while (j <= n){
      char ch = 'A'+j-1;
      cout << ch;
      j = j+1;
    }
    cout << endl;
    i = i+1;
  }

  // Alphabets in sequence order

    int n ;
  cin >> n;
  int i = 1;
  char ch = 'A';
  while (i <= n){
    int j = 1;
    while (j <=n){
      cout << ch << "";
      ch = ch +1;
      j = j+1;
      
    }
    cout << endl;
    i = i+1;
  }

  // Alphabets

    int n ;
  cin >> n;
  int i = 1;
  
  while (i <= n){
    int j = 1;
    while (j <=n){
      char ch = 'A'+i+j-2;
      cout << ch << "";
      j = j+1;
      
    }
    cout << endl;
    i = i+1;
  }

  // Alphabets Triangle

    int n;
  cin >> n ;
  int i = 1 ;
  while (i <= n){
    int j = 1;
    while(j <=i){
      char ch = 'A'+i-1;
      cout << ch <<"";
      j = j+1;
    }
    cout << endl;
    i = i+1;
  }

  
}