#include <iostream>
using namespace std;

bool isPrime(int);

int main() {
  for(int i = 0; i<=21; i++){
    if(isPrime(i) && i > 1){
      cout << i << " ";
    }
  }
  cout<< endl;
  return 0;
}

bool isPrime(int x){
  bool prime = true;
  for(int i=2; i<x;i++){
    if(x % i == 0){
      prime = false;
    }
  }
  return prime;
}