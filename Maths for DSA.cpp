#include <iostream>
#include <vector>
using namespace std;


//Basic Maths for DSA
bool isPrime(int n){
  if(n<=1){
    return 0;
  }
  for (int i =2; i<n; i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

// General Method
int countPrimes(int n){
  int count = 0;
  for (int i = 2;i<n; i++){
    if (isPrime(i)){
      count ++;
    }
  }
  return count;
}

// int sieveOfEratostenes(int n){

//   int count = 0;
//   vector<bool> primes(n+1, true);

//   primes[0] = primes[1] = false;

//   for (int i = 2; i <n; i++){
//     if (isPrime(i)){
//       count ++;
//       for (int j = 2*i; j<n; j=j+i){
//         primes[j] = 0;
//       }
   
//     }
//     return count;
 
//   }
// }

int gcd(int a, int b){

  if (a == 0)
    return b;

  if (b == 0)
    return a;

  while (a != b){

    if (a > b)
    {
      a = a-b;
    }
    else
    {
      b = b-a;
    }
  }
  return a;
}

int main(){
  int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
  int n;
  cin >> n;

  if(isPrime(n)){
    cout << "Number is Prime " << endl;
  }
  else{
    cout << "Number is Not Prime " << endl;
  }

  //cout << countPrimes(n);
  //cout << sieveOfEratostenes(n);
  int a,b;
  cin >> a >> b;
  int ans = gcd(a,b);
  cout << ans;
}
