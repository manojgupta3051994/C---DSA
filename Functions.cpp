#include<iostream>
using namespace std;

//Function Signature
void printCounting(int num) {

//    cout << n << endl;
    //Function Body 
    for(int i=1; i<=num; i++) {
        cout<< i << " ";
    }
    cout<<endl;
}

int main() {

    int n;
    cin >> n;

    //function Call
    printCounting(n);


    return 0;
}


bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else { //Even
        return 1;
    }

}

int main() {
    
    int num;
    cin >> num;

    if(isEven(num)) {
        cout <<" Number is Even" <<endl;
    }
    else {
        cout<< " Number is Odd" <<endl;
    }


    return 0;
}

int main() {

    // pow(a,b)

    int a , b;

    cin >> a >> b;

    int ans = 1;

    for(int i = 1; i<=b; i++) {
        ans = ans * a;
    }

    cout<<" answer is " << ans <<endl;


    int c , d;

    cin >> c >> d;

    ans = 1;

    for(int i = 1; i<=d; i++) {
        ans = ans * c;
    }

    cout<<" answer is " << ans <<endl;

    int e , f;

    cin >> e >> f;

    ans = 1;

    for(int i = 1; i<=f; i++) {
        ans = ans * e;
    }

    cout<<" answer is " << ans <<endl;


    return 0;
}



int factorial(int n) {

    int fact = 1;

    for(int i = 1; i<=n; i++ ) {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r) {

    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;
}


int main( ) {

    int n, r;

    cin>> n >> r ;

    cout <<" Answer is " << nCr(n,r) << endl;

    return 0;
}


void dummy(int n ) {
    n++;
    cout << " n is " << n <<endl;

}

int main() {

    int n;
    cin >> n;

    dummy(n);

    cout<<"number n is "<< n << endl;


    return 0;
}


int power(int num1, int num2) {
    
    //cout << a <<endl;

    int ans = 1;

    for(int i = 1; i <= num2; i++) {
        ans = ans * num1;
    }

    return ans;
}
int main()
{
    int c , d;
    cin>> c >> d;

    int answer = power(c,d);
    cout << " answer is " << answer << endl;

    return 0;
}


bool isPrime(int n ) {
   for(int i = 2; i < n; i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
}