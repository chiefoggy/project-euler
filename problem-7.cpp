/*
10001st prime
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/
#include <iostream>
using namespace std;

bool isPrime(int num) {
  for (int i = 2; i*i <= num; i++) {
    if ((num % i) == 0) return false;
  }
  return num > 1;
}

int main() {
  int i = 2;
  for (int primes = 1; i++) {
    if (isPrime(i)) {
      if (primes++ == 10001) {
        cout << i << "\n";
        break;
      }
    }
  }
}
