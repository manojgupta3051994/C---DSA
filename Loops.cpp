#include <iostream>
using namespace std;

int main()
{

    // If else conditions 
    char x;
    cin >> x;

    if (islower(x)){
        cout << "Lower Case" << endl;
    }
    else if (isupper(x)){
        cout << "Upper Case" << endl;
    }
    else if (isdigit(x)){
        cout << "Number" << endl;
    }

    // While Loop 

    int n;
    cin >> n ;
    int i = 1;

    while(i < n){
        cout << i;
        i = i+1;
    }

    int n;
    cin >> n ;
    int i = 1;
    int sum = 0;
    while (i < n){
        sum = sum+i;
        i = i+1;
        cout << sum << "";
    }
    cout << endl;
    cout << sum << endl;

    // For Loop

    int sum = 0;
    int n ;
    cin >> n;
    for (int i = 1; i <=n ; i++){
        sum += i;
    }
    cout << sum << endl;

    // Fibonacci Number

    int n;
    cin >> n;
    int a = 0;
    int b = 1;

    for (int i = 1; i <=n ; i++){
        int fibnumber = a+b;
        cout << fibnumber << " ";

        a = b;
        b = fibnumber;
  }

  // Prime Number 

    int n;
    cin >> n;
    bool IsPrime = 1;
    for (int i = 2; i <n ; i ++){
        if (n%i==0){
        IsPrime = 0;
        break;
        continue;
        cout << "Manoj" << endl;
        }
    }
    if (IsPrime == 0){
        cout << "Not a Prime Number " << endl;
    }
    else{
        cout << "Is a Prime Number " << endl;
    }

}