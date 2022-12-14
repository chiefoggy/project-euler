/*
Largest Prime Factor
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/

#include <iostream>
#include <cmath>
using namespace std;

long long getMaxPrimeFactor(long long n){
    long long maxPrimeFactor = -1;
    while (n % 2 == 0){
        maxPrimeFactor = 2;
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
      while (n % i == 0) {
         maxPrimeFactor = i;
         n = n / i;
      }
   }
   if (n > 2) maxPrimeFactor = n;
   return maxPrimeFactor;
}

int main(){
    long long n = 600851475143;
    cout << getMaxPrimeFactor(n);
}
